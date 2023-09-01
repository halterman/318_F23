#include <random>
#include "randrange.h"


// Returns a pseudorandom integer in the range low...high, inclusive
int randrange(int low, int high) {
    static std::random_device rd;
    static std::mt19937 mt_generator(rd());
    std::uniform_int_distribution<int> dist(low, high);
    return dist(mt_generator);
}

