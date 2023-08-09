#include <iostream>

class Add {
    int a;
    int b;

    public:
        int i = 0;
        Add() {};
        ~Add() {};
        void setValue(int x, int y) {
            a = x;
            b = y;
            i++;
        };
        int calculate() {
            int sum;
            sum = a + b;
            return sum;
        };
};

class Multiply {
    int a;
    int b;

    public:
        int i = 0;
        Multiply() {};
        ~Multiply() {};
        void setValue(int x, int y) {
            a = x;
            b = y;
            i++;
        };
        int calculate() {
            int sum;
            sum = a * b;
            return sum;
        };
};

class Subtract {
    int a;
    int b;

    public:
        int i = 0;
        Subtract() {};
        ~Subtract() {};
        void setValue(int x, int y) {
            a = x;
            b = y;
            i++;
        };
        int calculate() {
            int sum;
            sum = a - b;
            return sum;
        };
};

class Divide {
    int a;
    int b;

    public:
        int i = 0;
        Divide() {};
        ~Divide() {};
        void setValue(int x, int y) {
            a = x;
            b = y;
            i++;
        };
        int calculate() {
            int sum;
            sum = a / b;
            return sum;
        };
};

int main() {
    int a, b;
    int num;

    Add add;
    Multiply mul;
    Divide div;
    Subtract sub;

    while(true) {

        std::cout << "1:(+), 2:(*), 3:(%), 4(-) 5:exit >> ";
        std::cin >> num;
        if (num == 5)
            break;
        std::cout << "operand >> ";
        std::cin >> a >> b;

        if (num == 1) {
            add.setValue(a, b);
            std::cout << "Add : " << add.calculate() << std::endl;
        }
        else if (num == 2) {       
            mul.setValue(a, b);
            std::cout << "Mul : " << mul.calculate() << std::endl;
        }
        else if (num == 3) {        
            div.setValue(a, b);
            std::cout << "Mod : " << div.calculate() << std::endl;
        }
        else {        
            sub.setValue(a, b);
            std::cout << "Minus : " << sub.calculate() << std::endl;
        }
    }

    std::cout << "Add = " << add.i << std::endl;
    std::cout << "Mod = " << div.i << std::endl;
    std::cout << "Mul = " << mul.i << std::endl;
    std::cout << "Minus = " << sub.i << std::endl;
    std::cout << "프로그램 종료" << std::endl;

    return 0;
}