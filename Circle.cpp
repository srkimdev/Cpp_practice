#include <iostream>

class Circle {
    int radius;
    int size;

    public:
        Circle() : Circle(1, 1) {}
        Circle(int r, int s) : radius(r), size(s) {}
        ~Circle();
        void setRadius (int r);
        double getArea();
        int show_radius();
};

double Circle::getArea() {
    return radius * radius * 3.14;
}

void Circle::setRadius (int r) {
    radius = r;
}

int Circle::show_radius () {
    return radius;
}

Circle::~Circle() {
    for (int i=0; i < size; i++) {
        std::cout << "반지름 " << radius << " 객체 소멸" << std::endl;
    }
}

int main() {
    int size;
    int radius;
    int sum = 0;

    std::cout << "생성하고자 하는 원의 개수 >> ";
    std::cin >> size;
    Circle *p = new Circle[size];

    for (int i = 1; i < size + 1; i++) {
        std::cout << "원" << i << ": ";
        std::cin >> radius;
        p[i-1].setRadius(radius);
    }

    for (int i = 0; i < size; i++) {
        std::cout << "반지름 = " << p[i].show_radius() << "     " << "넓이 = " << p[i].getArea() << std::endl;
        if ((p[i].getArea() > 100) && (p[i].getArea() < 200)) {
            sum ++;
        }
    }

    std::cout << std::endl;
    std::cout << "면적이 100에서 200 사이인 원의 개수는 " << sum << std::endl;
    std::cout << std::endl;

    delete [] p;

    return 0;
}