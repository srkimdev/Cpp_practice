#include <iostream>

class Sample {
    int* arr;
    int size;

    public:
        Sample() {};
        Sample(int size);
        ~Sample() {delete [] arr;};
        void read();
        void write();    
        int big();
};

Sample::Sample(int size) {
    this -> size = size;
    arr = new int[size];
}

void Sample::read() {
    int num;
    std::cout << "read() 함수에서 배열 원소 입력" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << i + 1 <<" ) ";
        std::cin >> num;
        arr[i] = num;
    }  
}

void Sample::write() {
    std::cout << "write() 함수에서 배열 원소 출력" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int Sample::big() {
    int max = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int num;
    Sample s(10);

    s.read();
    s.write();
    
    std::cout << "가장 큰 수는 " << s.big() << std::endl;

    return 0;
}