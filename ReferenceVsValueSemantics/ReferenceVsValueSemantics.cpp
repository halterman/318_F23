#include <iostream>

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
}

