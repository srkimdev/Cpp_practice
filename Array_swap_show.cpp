#include <iostream>

void printArray(int* p, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << p[i] << " ";
    }
    std::cout << std::endl;
}

void swapArray(int* p, int* q, int size) {
    int tmp;

    for (int i = 0; i < size; i++) {
        tmp = *(p+i);
        p[i] = q[i];
        q[i] = tmp;
    }
}

int main() {

    int a[] = {1, 2, 3, 4, 5};
    int b[] = {9, 8, 7, 6, 5};

    std::cout << "배열 a = ";
    printArray(a, sizeof(a) / sizeof(int));
    std::cout << "배열 b = ";
    printArray(b, sizeof(b) / sizeof(int));

    std::cout << "swapArray() 실행..." << std::endl;

    swapArray(a, b, sizeof(a) / sizeof(int));

    std::cout << "배열 a = ";
    printArray(a, sizeof(a) / sizeof(int));
    std::cout << "배열 b = ";
    printArray(b, sizeof(b) / sizeof(int));

    return 0;
}