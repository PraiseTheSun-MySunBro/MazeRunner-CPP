// HW03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MazeRunner.h"
#include "Solver.h"
#include <iostream>


int main()
{
	MazeRunner mazeRunner("maps/ns5b.maze");
	Solver solver(mazeRunner);

	auto shortestPath = solver.solve();

	std::cin.get();
	return 0;
}

