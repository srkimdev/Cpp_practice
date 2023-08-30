#include <iostream>

template <typename T>
bool search(T a, T b[], int size) {
    for(int i = 0; i < size; i++) {
        if (b[i] == a)
            return true;
    }
    return false;
}


int main() {
    char x[] = {'c', 'd', 'e', 'f', 'g'};

    if (search('e', x, 5))
        std::cout << "100이 배열 x에 포함되어 있습니다." << std::endl;
    else
        std::cout << "100이 배열 x에 포함되어 있지 않습니다." << std::endl;

    return 0;
}