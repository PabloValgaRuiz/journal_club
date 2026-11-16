#include <random>
#include "my_random_lib.h"
int get_random_number(){
    std::mt19937 gen(1);
    std::uniform_int_distribution<> dist(0, 100);
    return dist(gen);
}