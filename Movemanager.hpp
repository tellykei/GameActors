#pragma once
#include "stdafx.h"
#include <iostream>
#include <vector>
#define maxlen 100
using namespace std;

class StackEmptyException {};
class StackFullException {};

class Actors;

template<typename T>
class Stack {
private:
	T * data;
	int top;
	int max;
public:
	Stack() :max{ maxlen } {
		data = new T[max];
		top = -1;
	}
	Stack(int len) :max{ len } {
		data = new T[max];
		top = -1;
	}
	void MakeEmpty();
	bool IsEmpty();
	bool IsFull();
	void Push(T item);
	T Top();
	void Pop();
};
template <typename T>
void Stack<T>::MakeEmpty() {
	top = -1;
}

template <typename T>
bool Stack<T>::IsEmpty() {
	return top == -1;
}

template <typename T>
bool Stack<T>::IsFull() {
	return top == max - 1;
}

template <typename T>
void Stack<T>::Push(T item) {
	if (IsFull()) throw StackFullException();

	data[++top] = item;
}
template <typename T>
T Stack<T>::Top() {
	if (IsEmpty()) throw StackEmptyException();

	return data[top];
}

template <typename T>
void Stack<T>::Pop() {
	if (IsEmpty()) throw StackEmptyException();

	top--;
}
static int  state = 0;

enum CommandType {
	Increment,
	Decrement
};

class ICommand {

public:
	virtual void Execute() = 0;
	virtual ~ICommand() {
		cout << "Command destructor" << endl;
	}
};

class IUndoableCommand : public ICommand {
public:
	virtual void Undo() = 0;
};

class IncrementCommand : public IUndoableCommand {
public:
	void Execute() {
		state++;
	}

	void Undo() {
		state--;
	}
};

class DecrementCommand : public IUndoableCommand {
public:
	void Execute() {
		state--;
	}

	void Undo() {
		state++;
	}
};

class Movemanager
{
	Actors* actor;
private:
	Stack<IUndoableCommand*> stack;
public:
	//Movemanager * mgr;
	Movemanager():
		stack{ Stack<IUndoableCommand*>() }
	{}

	void DoMove(CommandType commandType);
	void UndoLastCommand();
	~Movemanager();
};