#include <iostream>
//#include <vector>
#include "CShowable.h"
#include "CPoint2D.h"
#include "CSong.h"
#include "CToy.h"

template<typename T>
void display(T &obj) {
    std::cout << "Object: " << obj.show() << " Size: " << sizeof(T) << " bytes" << std::endl;
}

// void watch(std::vector<CShowable&> &set) {
//     std::cout << "Watch window:" << std::endl;
//     //for (auto i : set)
//     for (int i = 0; i < set.size(); i++)
//         display(i);
// }

int main() {
    CPoint2D point1 = {2.5, 8.0};
    CPoint2D point2 = {5, 6};
    CSong song1 = {"OneRepublic", "Counting Stars"};
    CSong song2 = {"Muse", "Butterflies and Hurricanes"};
    CToy toy1 = {"Black", "cat"};
    CToy toy2 = {"White", "unicorn"};

    std::cout << "Watch window:" << std::endl;
    display(point1);
    display(point2);
    display(song1);
    display(song2);
    display(toy1);
    display(toy2);
    
    // std::vector<CShowable&> set;
    // set.push_back(point);
    // set.push_back(song);
    // set.push_back(toy);

    //watch(set);
    return 0;
}