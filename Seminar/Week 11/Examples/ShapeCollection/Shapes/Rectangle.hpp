#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_

#include "Shape.hpp"

class Rectangle : public Shape{

public:
	Rectangle(int x1, int y1, int x3, int y3);
	double GetArea() const override;
	double GetPer() const override;
	bool IsPointIn(int x, int y) const override;
	Shape *Clone() const override;

};

#endif