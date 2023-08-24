#include <iostream>

class Rectangle {
    int length;
    int width;

    public:
        
        Rectangle() : length(1), width(1) {};
        ~Rectangle() {};
        int getPeri(int length, int width);
        int getArea(int length, int width);
};

class Cuboid : public Rectangle {
    int height; 

    public:
        Cuboid() : height(1) {};
        ~Cuboid() {};
        int getSurfaceArea(int length, int width, int height);
        int getVolume(int length, int width, int height);
};

int Rectangle::getPeri(int length, int width) { 
    return length *2 + width * 2; // 겉넓이
}

int Rectangle::getArea(int length, int width) {
    return length * width;
}

int Cuboid::getSurfaceArea(int length, int width, int height) {
    return length * width * 2 + length * height * 2 + width * height * 2;
}

int Cuboid::getVolume(int length, int width, int height) {
    return length * width * height;
}

int main() {
    int length, width, height;

    std::cout << "가로 길이 입력 : ";
    std::cin >> length;
    std::cout << "세로 길이 입력 : ";
    std::cin >> width;
    std::cout << "높이 길이 입력 : ";
    std::cin >> height;

    Rectangle s;
    Cuboid c;

    std::cout << "직사각형의 둘레 : " << s.getPeri(length, width) << std::endl;
    std::cout << "직사각형의 넓이 : " << s.getArea(length, width) << std::endl;
    std::cout << "직사각형의 겉넓이 : " << c.getSurfaceArea(length, width, height) << std::endl;
    std::cout << "직사각형의 부피 : " << c.getVolume(length, width, height) << std::endl;

    return 0;
}

