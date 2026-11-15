#include "random.h"
#include "pcg/include/pcg_random.hpp"
#include <random>

int getRandomInt(int min, int max) {
    std::uniform_int_distribution<int> dist(min, max);

    static pcg32 static_rng{1};
    
    return dist(static_rng);
}