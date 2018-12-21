#pragma once
#include "stdafx.h"
#include "Movemanager.hpp"
#include "Actors.hpp"



class Movemanager;

class BattleMove : public Actors {

	Movemanager* mgr;
private:
	Actors* self;
	Actors* other;
public:
	void virtual Execute() = 0;
	void virtual Undo() = 0;
};

class Attack1 : public BattleMove {
public:
	void  Execute1(Actors* other, Movemanager* mgr);
	void  Undo1(Movemanager* mgr);
};
class Attack2 : public BattleMove {
	
	void  Execute2(Actors* other, Movemanager* mgr);
	void Undo2(Movemanager* mgr);
};
class Heal : public BattleMove { 
	void Execute3(Actors* self, Movemanager* mgr);
	void Undo3(Movemanager* mgr);
};
	
