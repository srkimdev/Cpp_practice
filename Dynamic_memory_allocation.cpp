#include <iostream>

int main() {
    int *p;

    p = new int;
    if(!p) {
        std::cout << "메모리를 할당할 수 없습니다.";
        return 0;
    }

    *p = 5;
    int n = *p;
    std::cout << "*p = " << *p << '\n';
    std::cout << "n = " << n << '\n';

    delete p;
}