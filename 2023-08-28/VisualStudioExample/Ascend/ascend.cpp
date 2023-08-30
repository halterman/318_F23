#include "ascend.h"

bool is_ascending(const std::vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n - 1; i++) {
        if (vec[i] > vec[i + 1]) {
            return false;
        }
    }
    return true;
}