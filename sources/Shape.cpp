#include "Shape.h"
#include <cassert>
#include <ctime>
#include <cstdlib>

using namespace std;

Shape::Shape()
{
	srand(time(NULL));
}

Shape::~Shape()
{
}


vector<vector<int>> Shape::getShape()
{
	int index = rand() % 7;
	switch(index)
	{
		case LINE:
			return {{0,0,0,1},
				{0,0,0,1},
				{0,0,0,1},
				{0,0,0,1}};
		case SQUARE:
			return {{0,0,0,0},
				{0,1,1,0},
				{0,1,1,0},
				{0,0,0,0}};
		case LEFTL:
			return {{0,1,0,0},
				{0,1,0,0},
				{0,1,1,0},
				{0,0,0,0}};
		case RIGHTL:
			return {{0,0,1,0},
				{0,0,1,0},
				{0,1,1,0},
				{0,0,0,0}};
		case LEFTZ:
			return {{0,1,0,0},
				{0,1,1,0},
				{0,0,1,0},
				{0,0,0,0}};
		case RIGHTZ:
			return {{0,0,1,0},
				{0,1,1,0},
				{0,1,0,0},
				{0,0,0,0}};
		case MOUNTAIN:
			return {{0,1,1,1},
				{0,0,1,0},
				{0,0,0,0},
				{0,0,0,0}};
	}
	assert(false);
	return vector<vector<int>>();
}
