#include <iostream>

#include "simple.hpp"  


int main(int argc, char*argv[]) {
    std::cout << "Helo word\n";

    Simple t = Simple();
    Simple e{std::move(t)};

    t = std::move(e);

    return 0;
}