// HW03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MazeRunner.h"
#include <iostream>


int main()
{
	auto mazeRunner = new MazeRunner("maps/nm5b.maze");
	mazeRunner->move(Heading::N);

	std::cout << mazeRunner->getPosition().first << " " << mazeRunner->getPosition().second << std::endl;
	std::cin.get();
	return 0;
}

