#include <iostream>
#include "CSong.h"

CSong::CSong(std::string author, std::string title) : _author(author), _title(title) {}

CSong::~CSong() = default;

std::string CSong::show() {
    return "CSong('" + _author + "', '" + _title + "')";
}