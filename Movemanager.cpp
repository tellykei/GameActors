#include "stdafx.h"
#pragma once
#include "Movemanager.hpp"
#include "Actors.hpp"

Movemanager::~Movemanager()
{
	while (!stack.IsEmpty()) {
		delete stack.Top();
		stack.Pop();
	}
}
void Movemanager::DoMove(CommandType commandType) {
	IUndoableCommand* cmd=NULL;
	switch (commandType) {
	case CommandType::Decrement:
		cmd = new DecrementCommand();
		break;
	case CommandType::Increment:
		cmd = new IncrementCommand();
		break;
	}
	cmd->Execute();
	stack.Push(cmd);
}

void Movemanager::UndoLastCommand() {
	auto cmd = stack.Top();
	cmd->Undo();
	delete stack.Top();
	stack.Pop();
}