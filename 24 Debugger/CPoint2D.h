#pragma once

#include "CShowable.h"

class CPoint2D : public CShowable {
public:
    CPoint2D(double x = 0, double y = 0);

    ~CPoint2D();

    std::string show() final;
private:
    double _x, _y;
};
