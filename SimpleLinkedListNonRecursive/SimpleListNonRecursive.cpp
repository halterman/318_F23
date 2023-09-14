#include <iostream>

struct Node {
    int data;
    Node *next;
};

Node *insert(Node *p, int n) {
    if (!p) {
        p = new Node;
        p->data = n;
        p->next = nullptr;
    }
    else {
        Node *cursor = p;
        while (cursor->next)
           cursor =cursor->next;
        cursor->next = new Node;
        cursor->next->data = n;
        cursor->next->next = nullptr;
    }
    return p;
}

void print(Node *list) {
    for (Node *cursor = list; cursor; cursor = cursor->next)
        std::cout << cursor->data << ' ';
    std::cout << '\n';
}

int main() {
    std::cout << "Non-recursive version\n";
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
