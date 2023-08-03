#include <iostream>

class Square {
    int side;

    public:
        Square() : side(1) {};
        Square(int s) : side(s) {};
        ~Square();
        int getPeri(int side);
        int getArea(int side);
};

class Cube : public Square {

    public:
        Cube() : Square(1) {};
        ~Cube();
        int getArea(int side);
        int getVolume(int side);
};

Square::~Square() {
    std::cout << "Square 소멸자 생성" << std::endl;
}

Cube::~Cube() {
    std::cout << "Cube 소멸자 생성" << std::endl;
}

int Square::getPeri(int side) {
    return 4 * side;
}

int Square::getArea(int side) {
    return side * side;
}

int Cube::getArea(int side) {
    return side * side * 6;
}

int Cube::getVolume(int side) {
    return side * side * side;
}

int main() {

    int side;

    std::cout << "한 변의 길이 입력 : ";
    std::cin >> side;

    Square S(side);
    Cube C;

    std::cout << "정사각형의 둘레 : " << C.getPeri(side) << "cm" << std::endl;
    std::cout << "정사각형의 넓이 : " << S.getArea(side) << "cm^2" << std::endl;
    std::cout << "정사각형의 겉넓이 : " << C.getArea(side) << "cm^2" << std::endl;
    std::cout << "정사각형의 부피 : " << C.getVolume(side) << "cm^3" << std::endl; 

    return 0;
}

