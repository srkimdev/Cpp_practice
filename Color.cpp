#include <iostream>

class Color {
    int red, green, blue;
    std::string color;

    public:
        Color() : Color(0, 0, 0, "black") {}
        Color(int r, int g, int b, std::string c) : red(r), green(g), blue(b), color(c) {}
        ~Color() {std::cout << color << "객체 소멸" << std::endl;}
        void setColor(int r, int g, int b, std::string c);
        void show();
};

void Color::show() {
    std::cout << red << " " << green << " " << blue << std::endl;
}

int main() {
    Color *p = new Color;
    Color *q = new Color(0, 255, 0, "green");
    p -> show();
    q -> show();

    delete q;
    delete p;
}