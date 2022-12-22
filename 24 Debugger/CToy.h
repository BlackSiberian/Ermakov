#pragma once

#include <string>
#include "CShowable.h"

class CToy : public CShowable {
public:
    CToy(std::string color = "-", std::string animal = "-");

    ~CToy();

    std::string show() final;
private:
    std::string _color, _animal;
};
