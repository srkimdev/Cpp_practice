#include <iostream>

class Dept {
    int size;
    int *scores;

    public:
        Dept(int size);
        Dept(Dept& dept);
        ~Dept() {delete [] scores;}
        int getSize();
        void read();
        bool isOver60(int index);
};

Dept::Dept (int size) {
    this -> size = size;
    scores = new int[size];
}

void Dept::read() {
    int a;

    for(int i = 0; i < size; i++) {
        std::cout << i+1 << "]";
        std::cin >> a;
        scores[i] = a;
    }
}

bool Dept::isOver60(int index) {
    if(scores[index] >= 60)
        return true;
    else
        return false;
}

int Dept::getSize() {
    return size;
}

int countPass(Dept& c) {
    int sum = 0;

    for(int i = 0; i < c.getSize(); i++) {
        if (c.isOver60(i) == true)
            sum++;
    }

    return sum;
}

int main() {
    
    int cnt;
    std::cout << "학생 수를 입력하세요 >> ";
    std::cin >> cnt;

    Dept* com = new Dept(cnt);
    
    com -> read();
    int n = countPass(*com);
    std::cout << "60점 이상은 " << n << "명입니다" << std::endl;

    delete com; 

    return 0;
}