/*
 Created by gsg on 28/01/2020.
*/

#include <iostream>
#include <cstring>
#include "SomeClass.hpp"


SomeClass::SomeClass(): x1(nullptr), x2(nullptr) {
    std::cout << "\tSomeClass constructor called\n";
    if(x1 = new char[MEM_SIZE], !x1) throw SomeClass_exception( "SomeClass memory allocation error on x1.");
    if(x2 = new char[MEM_SIZE*MEM_SIZE], !x2) throw SomeClass_exception("SomeClass memory allocation error on x2.");
}
SomeClass::SomeClass(const SomeClass& other) {
    if(this == &other) return;
    std::cout << "\tSomeClass copy constructor called\n";
    if(x1 = new char[MEM_SIZE], !x1) throw SomeClass_exception( "SomeClass memory allocation error on x1.");
    if(x2 = new char[MEM_SIZE*MEM_SIZE], !x2) throw SomeClass_exception("SomeClass memory allocation error on x2.");
    memcpy(x1, other.x1, MEM_SIZE);
    memcpy(x2, other.x2, MEM_SIZE*MEM_SIZE);
}
SomeClass::SomeClass(SomeClass&& tmp) noexcept {
    if(this == &tmp) return;
    std::cout << "\tSomeClass move constructor called\n";
    x1 = tmp.x1;
    x2 = tmp.x2;
    tmp.x1 = nullptr;
    tmp.x2 = nullptr;
}
SomeClass::~SomeClass() {
    std::cout << "\tSomeClass destructor called\n";
    delete []x1;
    delete []x2;
}
SomeClass& SomeClass::operator=(const SomeClass& other) {
    if(this != &other) {
        std::cout << "\tSomeClass operator= called\n";
        memcpy(x1, other.x1, MEM_SIZE);
        memcpy(x2, other.x2, MEM_SIZE*MEM_SIZE);
    }
    return *this;
}
SomeClass& SomeClass::operator=(SomeClass&& other) noexcept {
    if(this != &other) {
        std::cout << "\tSomeClass move operator= called\n";
        x1 = other.x1;
        x2 = other.x2;
        other.x1 = nullptr;
        other.x2 = nullptr;
    }
    return *this;
}
