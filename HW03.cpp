// HW03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MazeRunner.h"
#include "Solver.h"
#include <iostream>
#include <ctime>


int main()
{
	auto startTime = clock();
	MazeRunner mazeRunner("maps/2000.maze");
	Solver solver(mazeRunner);

	auto shortestPath = solver.solve();

	std::cout << "End time: " << clock() - startTime << std::endl;

	std::cin.get();
	return 0;
}

