#include <iostream>
#include <cassert>

#include "a.h"

void a_method(){
    std::cout << "Hello from dynamic lib!!!" <<std::endl;
    if (true)
        assert(true);
    std::cin.get();
}
