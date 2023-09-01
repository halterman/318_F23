// IsAscending.cpp
// Created 4/27/2022 9:02:27 PM

#include <iostream>
#include <vector>
#include <functional>
#include <numeric>
#include <algorithm>

#include "randrange.h"
#include "stopwatch.h"



std::vector<int> make_vector(int max_size, int max_element) {
    std::vector<int> result(randrange(0, max_size));
    std::generate(result.begin(), result.end(), 
                  [max_element]() { return randrange(0, max_element); });
    return result;
}


bool is_ascending1(const std::vector<int>& v) {
    size_t n = v.size();
    for (size_t i = 0; i < n - 1; i++) {
        for (size_t j = i + 1; j < n; j++) {
            if (v[i] > v[j]) {
                return false;
            }
        }
    }
    return true;
}

bool is_ascending2(const std::vector<int>& v) {
    size_t n = v.size();
    for (size_t i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
            return false;
        }
    }
    return true;
}

void time_it(const std::vector<int>& vec, 
             std::function<bool(const std::vector<int>&)> f) {
    Stopwatch timer;
    timer.start();
    bool ans = f(vec);
    timer.stop();
    std::cout << std::boolalpha << "Answer: " << ans << ", " 
              << timer.elapsed() << " seconds elapsed" << '\n';

}

std::ostream& operator<<(std::ostream& os, const std::vector<int>& vec) {
    size_t n = vec.size();
    os << '{';
    if (n > 0) {
        os << vec[0];
        for (size_t i = 1; i < n; i++) {
            os << ", " << vec[i];
        }
    }
    os << '}';
    return os;
}

void test_make_vector() {
    for (int i = 0; i < 30; i++) {
        std::cout << make_vector(10, 100) << '\n';
    }
    std::cout << "------------------\n";
}


int main(int argc, char* argv[]) {
    //test_make_vector();
    if (argc < 2) {
        std::cout << "Provide vector size on command line to test is_ascending\n";
    }
    else {
        const int VECTOR_SIZE = atoi(argv[1]);

        std::vector<int> bigvec(VECTOR_SIZE);
        std::iota(bigvec.begin(), bigvec.end(), 0);

        time_it(bigvec, is_ascending1);
        time_it(bigvec, is_ascending2);
    }
}



