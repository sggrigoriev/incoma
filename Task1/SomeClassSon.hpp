/*
 Created by gsg on 30/03/2020.
*/

#ifndef TASK1_SOMECLASSSON_HPP
#define TASK1_SOMECLASSSON_HPP

#include "SomeClass.hpp"

class SomeClassSon: protected SomeClass {
public:
    explicit SomeClassSon(char a);
    void print_content();
};


#endif /* TASK1_SOMECLASSSON_HPP */
