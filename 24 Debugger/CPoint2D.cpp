#include <iostream>
#include "CPoint2D.h"

CPoint2D::CPoint2D(double x, double y) : _x(x), _y(y) {}

CPoint2D::~CPoint2D() = default;

std::string CPoint2D::show() {
    return "CPoint2D(" + std::to_string(_x) + "; " + std::to_string(_y) + ")";
}
