#include <iostream>
#include <functional>

int sum(int begin, int end, std::function<int(int)> f) {
    int s = 0;
    for (int i = begin; i <= end; i++)
        s += f(i);
    return s;
}

  
int sum2(int begin, int end, int (*f)(int)) {
    int s = 0;
    for (int i = begin; i <= end; i++)
        s += f(i);
    return s;
}


inline int id(int n) { return n; }

int main() {
    std::cout << sum(1, 10, id) << '\n';
    std::cout << sum(1, 5, id) + sum(6, 10, id) << '\n';
}
