#pragma once
#include "cell.h"
#include <iostream>
#include "Util.h"

class ClosestPoint
{
public:

	float bruteForce(Cell P[], int n);

	float stripClosest(Cell strip[], int size, float d);

	int compareX(const void * a, const void * b);

	int compareY(const void * a, const void * b);

	Cell* addPoints();
	bool checkOnTable(int x, int y);
	void runClosestPoint();

	void testaStrip(Cell strip[]);

	Cell *cells;
	Util util;
};

