#include <iostream>

#include "VectorD.hpp"


int main(int argc, char **argv) {

    VectorD v(3);

    v[0] = 1.0;
    v[1] = 0.3; 
    v[2] = 5.2;

    std::cout << "v : " << v << std::endl;

    return 0;
}
