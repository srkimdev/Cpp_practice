#include <iostream>

class Point {
    int x, y;
    
    public:
        Point(int x, int y) {
            this -> x = x;
            this -> y = y;
        }
        int getX() {
            return x;
        }
        int getY() {
            return y;
        }
    protected:
        void move_up(int x, int y) {
            this -> x += x;
            this -> y += y;
        }
        void move_down(int x, int y) {
            this -> x -= x;
            this -> y -= y;
        }
};

class ColorPoint : public Point {
    std::string color;
    char opt;

    public:
        ColorPoint() : Point(0, 0), color("BLACK"){
            std::cout << color << "색으로 (" << getX() << ", " << getY() << ")에 위치한 점입니다." << std::endl;
        }
        ColorPoint(int x, int y) : Point(x, y), color("BLUE"){}
        ColorPoint(int x, int y, std::string color) : Point(x, y) {
            this -> color = color;
            std::cout << color << "색으로 (" << x << ", " << y << ")에 위치한 점입니다." << std::endl;
        }

        void setPoint(int x, int y, char opt) {
            if (opt == '+')
                move_up(x, y);
            else
                move_down(x, y);
            std::cout << color << "색으로 (" << getX() << ", " << getY() << ")에 위치한 점입니다." << std::endl;
        }
};

int main() {
    
    std::cout << "zeroPoint 객체 출력" << std::endl;
    ColorPoint zeroPoint;

    std::cout << std::endl << "blue 객체 출력" << std::endl;
    ColorPoint blue(5, 5);
    std::cout << "현재 위치에서 x: +10, y: +20 위치로 이동합니다" << std::endl;
    blue.setPoint(10, 20, '+');

    std::cout << std::endl;
    std::cout << "red 객체 출력" << std::endl;

    ColorPoint red(50, 40, "RED");
    std::cout << "현재 위치에서 x: -10, y: -20 위치로 이동합니다" << std::endl;
    red.setPoint(10, 20, '-');

    return 0;
}
