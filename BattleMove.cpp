#include "stdafx.h"
#pragma once
#include "BattleMove.hpp"


void Attack1::Execute1(Actors* other, Movemanager* mgr) {
	//if actor does attack1 push into stack
	if (attack1) {
		
		srand(time(NULL));
		int damage = rand() % 16 + 10;
		other->Hit(damage);
		mgr->DoMove(Increment);
	}
}
void Attack1::Undo1(Movemanager* mgr) {
	//if actor does undo call heal and pop off last action
	mgr->UndoLastCommand();
	mgr->DoMove(Decrement);
}
void Attack2::Execute2(Actors* other, Movemanager* mgr) {
	if (attack2) {
		srand(time(NULL));
		int damage = rand() % 26;
		other->Hit(damage);
		mgr->DoMove(Increment);
	}
}
void Attack2::Undo2(Movemanager* mgr) {
	mgr->UndoLastCommand();
	mgr->DoMove(Decrement);
}
void Heal::Execute3(Actors* self, Movemanager* mgr) {
 //call heal function
	if (heal) {
		srand(time(NULL));
		int heala = rand() % 16 + 10;
		self->Heal(heala);
		mgr->DoMove(Increment);
	}
}
void Heal::Undo3(Movemanager* mgr) {
	mgr->UndoLastCommand();
	mgr->DoMove(Decrement);
}