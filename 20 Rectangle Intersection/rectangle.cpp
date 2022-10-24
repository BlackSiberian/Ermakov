#include "rectangle.h"

#include <utility>
#include <algorithm>

using std::pair;
using std::min;
using std::max;

rectangle::rectangle(double x1, double y1, double x2, double y2) {
    xCoords.first = min(x1, x2);
    xCoords.second = max(x1, x2);
    yCoords.first = min(y1, y2);
    yCoords.second = max(y1, y2);
}

rectangle::~rectangle() = default;

bool rectangle::isIntersected(rectangle rctg) {
    return !(xCoords.first > rctg.getXCoords().second || xCoords.second < rctg.getXCoords().first || yCoords.first > rctg.getYCoords().second || yCoords.second < rctg.getYCoords().first);
}

pair<double, double> rectangle::getXCoords() const {
    return xCoords;
}

pair<double, double> rectangle::getYCoords() const {
    return yCoords;
}