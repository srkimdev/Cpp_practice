#include <iostream>
#include <string>

class MyException {
    int lineNo;
    std::string func, msg;

    public:
        MyException(int n, std::string f, std::string m) {
            lineNo = n;
            func = f;
            msg = m;
        }
        void print() {
            std::cout << func << ":" << lineNo << " ," << msg << std::endl;
        }
};

class DivideByZeroException : public MyException {
    public:
        DivideByZeroException(int lineNo, std::string func, std::string msg) : MyException(lineNo, func, msg) {}
};

class InvalidInputException : public MyException {
    public:
        InvalidInputException(int lineNo, std::string func, std::string msg) : MyException(lineNo, func, msg) {}
};

int main() {
    int x, y;
    try {
        std::cout << "나눗셈을 합니다. 두 개의 양의 정수를 입력하세요 >> ";
        std::cin >> x >> y;

        if (x < 0 || y < 0)
            throw InvalidInputException(36, "main()", "음수 입력 예외 발생");
        if (y == 0)
            throw DivideByZeroException(38, "main()", "0으로 나누는 예외 발생");
        std::cout << (double)x / (double)y;
    }
    catch(DivideByZeroException &e) {e. print();}
    catch(InvalidInputException &e) {e. print();}
}