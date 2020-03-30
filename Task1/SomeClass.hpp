/*
 Created by gsg on 28/01/2020.
*/

#ifndef TASK1_SOMECLASS_HPP
#define TASK1_SOMECLASS_HPP


#include <cstdlib>
#include <stdexcept>

struct SomeClass_exception: std::runtime_error {
    explicit SomeClass_exception(const char* msg): std::runtime_error(std::string(msg)) {}
};

class SomeClass {
public:
    explicit SomeClass();
    SomeClass(const SomeClass& other);
    SomeClass(SomeClass&& tmp) noexcept;
    virtual ~SomeClass();

    SomeClass& operator=(const SomeClass& other);
    SomeClass& operator=(SomeClass&& other) noexcept;
protected:
    char *x1;
    char *x2;
private:
    const size_t MEM_SIZE = 1024;
};


#endif //TASK1_SOMECLASS_HPP
