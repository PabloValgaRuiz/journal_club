#pragma once
#include "pcg/include/pcg_random.hpp"
int getRandomInt(int min, int max);

static int headerGetRandomInt(int min, int max){
    static pcg32 static_rng{1};
    std::uniform_int_distribution<int> dist(min, max);
    return dist(static_rng);
}