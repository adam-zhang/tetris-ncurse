#ifndef __shape__h
#define __shape__h

#include <vector>

class Shape
{
	public:
		Shape();
		~Shape();
	public:
		enum
		{
			LINE,
			SQUARE,
			LEFTL,
			RIGHTL,
			LEFTZ,
			RIGHTZ,
			MOUNTAIN,
		};
	public:
		std::vector<std::vector<int>> getShape();
	private:

};
#endif//__shape__h
