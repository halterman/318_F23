// This code has a slight bug to be resolved next class

#include <iostream>
#include <vector>

bool is_ascending(const std::vector<int>& vec) {
    for (int i = 0; i < vec.size() - 1; i++) {
        if (vec[i] > vec[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << "--- Starting the program ---\n";
    std::vector<int> nums {10, 30, 20, 40};
    std::cout << is_ascending(nums) << '\n';
    std::cout << "--- Program finished ---\n";
}
