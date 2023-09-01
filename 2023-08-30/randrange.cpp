#include <random>
#include "randrange.h"


// Returns a pseudorandom integer in the range low...high - 1, inclusive
int randrange(int low, int high) {
    static std::random_device rd;
    static std::mt19937 mt_generator(rd());
    std::uniform_int_distribution<int> dist(low, high - 1);
    return dist(mt_generator);
}

