#include <iostream>

int main() {
    int size;
    double num;
    double sum = 0, ave;

    std::cout << "입력할 실수의 개수는? ";
    std::cin >> size;

    double *p = new double [size];

    for (int i=1; i < size + 1; i++) {
        std::cout << i << "번째 실수: ";
        std::cin >> num;
        p[i-1] = num;
    }

    for (int i = 0; i < size; i++) {
        sum = sum + p[i];
    }
    ave = sum / size;
    
    std::cout << "sum = " << sum << "       " << "ave = " << ave << std::endl;

    delete [] p;
}