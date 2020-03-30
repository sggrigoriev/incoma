/*
 Created by gsg on 30/03/2020.
*/

#include <iostream>
#include "SomeClassSon.hpp"

SomeClassSon::SomeClassSon(char a) {
    std::cout << "\tSomeClassSon constructor called\n";
    x1[0]= a;
}

void SomeClassSon::print_content() {
    if(!x1)
        std::cout << "No value\n";
    else
        std::cout << "Value = " << x1[0] << "\n";
}
