// This code has a slight bug to be resolved next class

#include <iostream>
#include "ascend.h"


int main() {
    std::vector<int> nums{ 10, 30, 20, 40 };
    std::cout << std::boolalpha;
    std::cout << is_ascending(nums) << '\n';
    std::cout << is_ascending({2, 4, 6, 8, 10}) << '\n';
    std::cout << is_ascending({}) << '\n';
    std::cout << "Program finished\n";
}