#pragma once

#include <string>
#include "CShowable.h"

class CSong : public CShowable {
public:
    CSong(std::string author = "-", std::string title = "-");

    ~CSong();

    std::string show() final;
private:
    std::string _author, _title;
};
