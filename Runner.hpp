#pragma once
#include "Actors.hpp"
#include "Movemanager.hpp"

class Runner
{
	Actors *actor;
	Movemanager *mgr;
public:
	
	int x;
	int y;
	void menu1() {
		cout << "Select Your Player:\n" << endl;
		cout << "1) Ghost" << endl;
		cout << "2.) Knight" << endl;
		cout << "3.) Warrior" << endl;
	}
	void menu2() {
		cout << "Select Your oppenent:" << endl;
		cout << "1) Ghost" << endl;
		cout << "2.) Knight" << endl;
		cout << "3.) Warrior" << endl;
	}
	
	void pickyourfighter() {
		cin >> x;
		this->menu1();
		do {
			switch (x) {
			case(1):
				cout << "you chose ghost" << endl;
				this->menu2();
				cin >> y;

				if (y == 1) {
					cout << "Your opponent is a Ghost" << endl;
					this->matchup1();
					this->moveset1();
					//display health
					//display both fighters
				}
				else if (y == 2) {
					cout << "Your opponent is a Knight" << endl;
					this->matchup2();
					this->moveset2();
				}
				else if (y == 3) {
					cout << "your opponent is a Warrior" << endl;
					this->matchup3();
					this->moveset3();
				}
				else {
					cout << "Your answer was invaild please try again" << endl;
				}
				
				break;
			case(2):
				cout << "you chose knight" << endl;
				this->menu2();
				cin >> y;

				if (y == 1) {
					cout << "Your opponent is a Ghost" << endl;
					//display health
					//display both fighters
					this->matchup4();
					this->moveset4();
				}
				else if (y == 2) {
					cout << "Your opponent is a Knight" << endl;
					this->matchup5();
					this->moveset5();
				}
				else if (y == 3) {
					cout << "your opponent is a Warrior" << endl;
					this->matchup6();
					this->moveset6();
				}
				else {
					cout << "Your answer was invaild please try again" << endl;
				}
				break;
			case (3):
				cout << "you chose warrior" << endl;
				menu2();
				cin >> y;

				if (y == 1) {
					cout << "Your opponent is a Ghost" << endl;
					//display health
					//display both fighters
					this->matchup7();
					this->moveset7();
				}
				else if (y == 2) {
					cout << "Your opponent is a Knight" << endl;
					this->matchup8();
					this->moveset8();
				}
				else if (y == 3) {
					cout << "your opponent is a Warrior" << endl;
					this->matchup9();
					this->moveset9();
				}
				else {
					cout << "Your answer was invaild please try again" << endl;
				}
				break;
			default:
				cout << "please enter in a vaild number" << endl;
			}
		}
		while (x != 1 || 2 || 3);
	}
	void setups() {
	}
	void matchup1() {
		vector<Actors*> actors;
		actors.push_back(new Ghost(100,"ghost"));
		actors.push_back(new Ghost(100,"ghost"));

		cout << *actors[0] << endl;
		cout << *actors[1] << endl;

		while (!actors[0]->IsDead() && !actors[1]->IsDead())
		{

			cout << *actors[0] << endl;
			cout << *actors[1] << endl;
		}

	}
	void matchup2() {
		vector<Actors*> actors;
		actors.push_back(new Ghost(100, "ghost"));
		actors.push_back(new Knight(100, "knight"));
		cout << *actors[0] << endl;
		cout << *actors[1] << endl;
	}
	void matchup3() {
		vector<Actors*> actors;
		actors.push_back(new Ghost(100, "ghost"));
		actors.push_back(new Warrior(100, "warrior"));

		cout << *actors[0] << endl;
		cout << *actors[1] << endl;
	}
	void matchup4() {
		vector<Actors*> actors;
		actors.push_back(new Knight(100, "knight"));
		actors.push_back(new Ghost(100, "ghost"));

		cout << *actors[0] << endl;
		cout << *actors[1] << endl;
	}
	void matchup5() {
		vector<Actors*> actors;
		actors.push_back(new Knight(100, "knight"));
		actors.push_back(new Knight(100, "knight"));

		cout << *actors[0] << endl;
		cout << *actors[1] << endl;
	}
	void matchup6() {
		vector<Actors*> actors;
		actors.push_back(new Knight(100, "Knight"));
		actors.push_back(new Warrior(100, "warrior"));

		cout << *actors[0] << endl;
		cout << *actors[1] << endl;
	}
	void matchup7() {
		vector<Actors*> actors;
		actors.push_back(new Warrior(100, "warrior"));
		actors.push_back(new Ghost(100, "ghost"));

		cout << *actors[0] << endl;
		cout << *actors[1] << endl;
	}
	void matchup8() {
		vector<Actors*> actors;
		actors.push_back(new Warrior(100, "warrior"));
		actors.push_back(new Knight(100, "knight"));

		cout << *actors[0] << endl;
		cout << *actors[1] << endl;
	}
	void matchup9() {
		vector<Actors*> actors;
		actors.push_back(new Warrior(100, "warrior"));
		actors.push_back(new Warrior(100, "warrior"));

		cout << *actors[0] << endl;
		cout << *actors[1] << endl;
	}

	void moveset1() {
		
		cout << "1.P1->P2" << endl;
		cout << "2.P2->P1" << endl;
		cout << "3.Undo last Move" << endl;
		int i;
		cin >> i;
		if (i == 1) {
		//	actor.Hit(attack1);

		}
		if (i == 2) {
			//actor.DoMove();

		}
		if (i == 3) {
		//	actor.DoMove();
		}
	}
	void moveset2() {
		cout << "1.P1 -> P2" << endl;
		cout << "2.P2 -> P1" << endl;
		cout << "3.Undo" << endl;
		int i;
		cin >> i;
		if (i == 1) {
		
		}
		if (i == 2) {

		}
		if (i == 3) {

		}
	}
	void moveset3() {
		cout << "1.P1 -> P2" << endl;
		cout << "2.P2 -> P1" << endl;
		cout << "3.Undo" << endl;
		int i;
		cin >> i;
		if (i == 1) {

		}
		if (i == 2) {

		}
		if (i == 3) {

		}
	}
	void moveset4() {
		cout << "1.P1 -> P2" << endl;
		cout << "2.P2 -> P1" << endl;
		cout << "3.Undo" << endl;
		int i;
		cin >> i;
		if (i == 1) {

		}
		if (i == 2) {

		}
		if (i == 3) {

		}
	}
	void moveset5() {
		cout << "1.P1 -> P2" << endl;
		cout << "2.P2 -> P1" << endl;
		cout << "3.Undo" << endl;
		int i;
		cin >> i;
		if (i == 1) {

		}
		if (i == 2) {

		}
		if (i == 3) {

		}
	}
	void moveset6() {
		cout << "1.P1 -> P2" << endl;
		cout << "2.P2 -> P1" << endl;
		cout << "3.Undo" << endl;
		int i;
		cin >> i;
		if (i == 1) {

		}
		if (i == 2) {

		}
		if (i == 3) {

		}
	}
	void moveset7() {
		cout << "1.P1 -> P2" << endl;
		cout << "2.P2 -> P1" << endl;
		cout << "3.Undo" << endl;
		int i;
		cin >> i;
		if (i == 1) {

		}
		if (i == 2) {

		}
		if (i == 3) {

		}
	}
	void moveset8() {
		cout << "1.P1 -> P2" << endl;
		cout << "2.P2 -> P1" << endl;
		cout << "3.Undo" << endl;
		int i;
		cin >> i;
		if (i == 1) {

		}
		if (i == 2) {

		}
		if (i == 3) {

		}
	}
	void moveset9() {
		cout << "1.P1 -> P2" << endl;
		cout << "2.P2 -> P1" << endl;
		cout << "3.Undo" << endl;
		int i;
		cin >> i;
		if (i == 1) {

		}
		if (i == 2) {

		}
		if (i == 3) {

		}
	}
	};
