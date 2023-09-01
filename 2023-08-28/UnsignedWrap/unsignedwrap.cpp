#include <iostream>

int main() {
    unsigned short x = 10;
    while (x >= 0) {     // How is this loop infinite?
        std::cout << x << '\n';
        x--;
    }
}
