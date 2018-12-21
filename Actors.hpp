#pragma once
#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>
#include<time.h>




using namespace std;
enum ActorType {ghost, knight, warrior};
enum  MoveType { attack1, attack2, heal };

class Movemanager;
class Actors
{
	Movemanager* mgr;

protected:
	int amount;
	int damage;
	string type;
	int health;
	bool dead;
	vector<MoveType>actor;

public:
	Actors(int health, string type);
	Actors();
	void DoMove(Movemanager* mgr, MoveType, Actors* other);
	void Hit(int damage);
	void Heal(int amount);
	void GetMoves();
	bool IsDead() { return this->dead; }
	friend ostream& operator<<(ostream& out, const Actors& a);
	~Actors();

};
inline
ostream& operator<<(ostream& out, const Actors& a) {
	out << " type: " << a.type << ", health: " << a.health;
	if (a.dead)
		out << " (deceased)";
	return out;
}

class Ghost: public Actors {
public:
	Ghost(int health, string type) :Actors(health, type) {
		type = "Ghost";
		health = 100;
		dead = false;
	}
	void Attack(Actors& actor) {
		actor.Hit(damage * health);
	}
	void movesetg();
	vector<MoveType>ghost;
};

class Knight: public Actors {
public:
	Knight(int health, string type) :Actors(health, type) {
		type = "Knight";
		health = 100;
		dead = false;
	}
	void Attack(Actors& actor) {
		actor.Hit(damage * health);
	}
	void movesetk();
	vector<MoveType>knight;
};

class Warrior: public Actors {
public:
	Warrior(int health, string type) :Actors(health, type) {
		type = "Warrior";
		health = 100;
		dead = false;
	}
	void Attack1(Actors& actor) {
		actor.Hit(damage* health);
	}
	void movesetw();
	vector<MoveType>warrior;

};


