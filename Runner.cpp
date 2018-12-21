#include "stdafx.h"
#pragma once
#include "Runner.hpp"
#include<iomanip>
#include<iostream>



int main(void) {	
	Runner run;

	Stack<IUndoableCommand*> stack;
	
	run.pickyourfighter();
	return 0;
}