#include "stdafx.h"
#include "Actors.hpp"
#include "Movemanager.hpp"


Actors::Actors(int health, string type)
{
}

void Actors::DoMove(Movemanager* mgr, MoveType, Actors* other) {
//	mgr->DoMove();

}

void Actors::Hit(int damage) {
	cout << damage << endl;
	health -= damage;
	if (health == 0)
		dead = true;
}
void Actors::Heal(int heala) {
	cout << heala << endl;
}
void Actors::GetMoves() {
	vector<MoveType>types; {

	}
}

Actors::~Actors()
{
}
void Ghost::movesetg() {
	vector<MoveType>ghost; {
		ghost.push_back(attack1);
		ghost.push_back(heal);
	}
}
void Knight::movesetk() {
	vector<MoveType>knight; {
		knight.push_back(attack1);
		knight.push_back(heal);
	}
}
void Warrior::movesetw() {
	vector<MoveType>warrior; {
		warrior.push_back(attack1);
		warrior.push_back(attack2);
	}
}