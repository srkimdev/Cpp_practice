#include <iostream>

class Circle {
    int radius;

    public:
        Circle() : radius(5) {}
        Circle(int r) : radius(r) {}
        void setRadius (int r) {
            radius = r;
        }
        double getArea();
};

double Circle::getArea() {
    return radius * radius * 3.14;
}

int main() {
    Circle circleArray[3];

    circleArray[0].setRadius(10);
    circleArray[1].setRadius(20);
    circleArray[2].setRadius(30);

    Circle *p;
    p = circleArray;

    for (int i=0; i<3; i++) {
        std::cout << "Circle" << i << "의 면적은 " << p -> getArea() << std::endl;
    }
    return 0;
}