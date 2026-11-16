#include <iostream>
#include "random.h"

int main2();

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::cout << "Random number: " << getRandomInt(1, 100) << std::endl;
    std::cout << "Random number: " << getRandomInt(1, 100) << std::endl;
    std::cout << "Random number: " << getRandomInt(1, 100) << std::endl;

    return 0;
}