#ifndef UNIFORMRANDOM_H_DEFINED
#define UNIFORMRANDOM_H_DEFINED

#include <random>

class UniformRandomGenerator {
    // Source of randomness to initialize the generator.
    // All UniformRandomGenerator instances share this object.
    static std::random_device rd;

    // A Mersenne Twister random number generator with a seed 
    // obtained from a random_device object.
    // All UniformRandomGenerator instances share this generator;
    // this ensures a common source source of randomness for the
    // appliation.
    static std::mt19937 mt_gen;

    // The constructor will set the range of this
    // uniform distribution object.
    std::uniform_int_distribution<int> dist;

public:
    // The smallest pseudorandom number this generator can produce
    const int MIN;

    // The largest pseudorandom number this generator can produce
    const int MAX;

    // Create a pseudorandom number generator that produces values in 
    // the range low...high
    UniformRandomGenerator(int low, int high);

    // Return a pseudorandom number in the range MIN...MAX
    int operator()();
};

#endif

