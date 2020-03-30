#include <vector>
#include <iostream>

#include "SomeClassSon.hpp"

int main() {
    std::cout << "SomeClassSon ss=SomeClassSon{'a'};\n";
    SomeClassSon ss=SomeClassSon{'a'};

    std::cout << "std::vector<SomeClassSon> v; v.emplace_back('b');\n";
    std::vector<SomeClassSon> v;
    v.emplace_back('b');

    std::cout << "v.push_back(v[0]);\n";
    v.push_back(v[0]);

    std::cout << "SomeClassSon o = SomeClassSon{'o'};\n";
    SomeClassSon o = SomeClassSon{'o'};
    std::cout << "SomeClassSon w = SomeClassSon{'w'};\n";
    SomeClassSon w = SomeClassSon{'w'};

    std::cout << "SomeClassSon temp = std::move(o);\n";
    SomeClassSon temp = std::move(o);
    std::cout << "o = std::move(w);\n";
    o = std::move(w);
    std::cout << "w = std::move(temp);\n";
    w = std::move(temp);

    std::cout << "Final descrtuction\n";

    return 0;
}
