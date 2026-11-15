#include <iostream>
#include "random.h"

int main2() {
    std::cout << "Hello, World 2!" << std::endl;

    std::cout << "Random number: " << getRandomInt(1, 100) << std::endl;
    std::cout << "Random number: " << getRandomInt(1, 100) << std::endl;
    std::cout << "Random number: " << getRandomInt(1, 100) << std::endl;

    // std::cout << "Random number (header): " << headerGetRandomInt(1, 100) << std::endl;
    // std::cout << "Random number (header): " << headerGetRandomInt(1, 100) << std::endl;
    // std::cout << "Random number (header): " << headerGetRandomInt(1, 100) << std::endl;

    return 0;
}