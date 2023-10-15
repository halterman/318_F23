#include <iostream>
#include <array>

class Widget {
public:
    int data;
};

int main() {
    //Widget wid = new Widget();
    Widget wid;
    wid.data = 5;
    std::cout << wid.data << '\n';

    Widget *wid2 = new Widget;
    wid2->data = 6;
    std::cout << wid2->data << '\n';

    const int SIZE = 100;
    // A statically-allocated raw array
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++) 
        arr[i] = 2*i;

    //A dynamically-allocated array
    int var_size;
    std::cin >> var_size;
    int *arr2 = new int[var_size];
    for (int i = 0; i < var_size; i++) 
        arr2[i] = 2*i;

    std::array<int, SIZE> arr3;

}

