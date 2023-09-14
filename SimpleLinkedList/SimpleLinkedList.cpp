#include <iostream>

struct Node {
    int data;
    Node *next;
};

Node *insert(Node *p, int n) {
    //  Check that we are not at the end of the list
    if (p)
        p->next = insert(p->next, n); // Add to rest of list
    else {   //  Insert new item
        p = new Node;
        p->data = n;
        p->next = nullptr;
    }
    return p;
}

void print(Node *list) {
    for (Node *cursor = list; cursor; cursor = cursor->next) 
        std::cout << cursor->data << ' ';
    std::cout << '\n';
}

int main() {
    Node *front = nullptr;
    front = insert(front, 15);
    print(front);
    front = insert(front, 99);
    print(front);
    front = insert(front, 3);
    print(front);
    front = insert(front, 10);
    print(front);
    front = insert(front, 33);
    print(front);
    front = insert(front, 2);
    print(front);
}
