#include <iostream>

class Circle {
    int radius;

    public:
        Circle(int radius = 0) {
            this -> radius = radius;
        }
        int getRadius() {
            return radius;
        }
        void setRadius(int radius) {
            this -> radius = radius;
        }
        double getArea() {
            return 3.14 * radius * radius;
        }
};

class NamedCircle : public Circle {
    std::string pizza;

    public:
        NamedCircle() {}
        void setPizza(int r, std::string pizza) {
            setRadius(r);
            this -> pizza = pizza;
        }
        std::string get_pizza() {
            return pizza;
        }
};

int main() {
    int radius;
    std::string pizza;
    NamedCircle c[5];
    float max = 0;
    int max_i = 0;

    std::cout << "5개의 정수 반지름과 원의 이름을 입력하세요" << std::endl;
    
    for(int i = 0; i < 5; i++) {
        std::cout << i + 1 << ">> "; 
        std::cin >> radius >> pizza;
        c[i].setPizza(radius, pizza);
        if (c[i].getArea() > max) {
            max = c[i].getArea();
            max_i = i;
        }
    }

    std::cout << "가장 면적이 큰 피자는 " << c[max_i].get_pizza() << "입니다" << std::endl; 

    return 0;
}