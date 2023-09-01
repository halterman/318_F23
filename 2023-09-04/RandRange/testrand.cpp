#include <iostream> 
#include "randrange.h" 

int main() {  
    for (int i = 0; i < 100; i++) { 
        // Obtain a random integer in the range 20...29
        int x = randrange(20, 30); 
        std::cout << x << '\n'; // Print the integer 
    } 
}

