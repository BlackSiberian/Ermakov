#pragma once

#include <utility>

class rectangle {
    public:
        rectangle(double x1, double y1, double x2, double y2);
        ~rectangle();

        bool isIntersected(rectangle rctg);
        std::pair<double, double> getXCoords() const;
        std::pair<double, double> getYCoords() const;

    private:
        std::pair<double, double> xCoords;
        std::pair<double, double> yCoords;
};