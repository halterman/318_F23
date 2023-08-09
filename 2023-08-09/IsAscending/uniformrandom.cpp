#include "uniformrandom.h"

// Source of randomness to initialize the generator.
std::random_device UniformRandomGenerator::rd;

// A Mersenne Twister random number generator with a seed 
// obtained from a random_device object.
std::mt19937 UniformRandomGenerator::mt_gen(rd());


// Create a pseudorandom number generator that produces values in 
// the range low...high
UniformRandomGenerator::UniformRandomGenerator(int low, int high) 
                      : dist(low, high), MIN(low), MAX(high) {}

// Return a pseudorandom number in the range MIN...MAX
int UniformRandomGenerator::operator()() {
    return dist(mt_gen);
}

