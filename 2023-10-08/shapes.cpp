#include <iostream>
#include <numbers>

// An abstract base class for shape objects.
class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

class Rectangle : public Shape {
    double width;
    double height;
public:
    Rectangle(double width, double height):
                width(width), height(height) {}
    double area() const override {
        return width * height;
    }
    double perimeter() const override {
        return 2*width + 2*height;
    }
};

class Circle : public Shape {
    double radius;
public:
    Circle(double radius): radius(radius) {}
    double area() const override {
        return std::numbers::pi * radius *radius;
    }
    double perimeter() const override {
        return 2 * std::numbers::pi * radius;
    }
};

int main() {
    Shape *circ1 = new Circle(10);
    Shape *rect1 = new Rectangle(5, 20);

    std::cout << circ1->perimeter() << ", " << circ1->area() << '\n';
    std::cout << rect1->perimeter() << ", " << rect1->area() << '\n';
}
