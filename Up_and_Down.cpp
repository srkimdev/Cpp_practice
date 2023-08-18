#include <iostream>
#include <string>
#include <random>

class Person {
    std::string name;

    public:
        Person() {};
        Person(std::string name) {
            this -> name = name;
        }
        std::string getName() {
            return name;
        }
        bool go();
};

class UpAndDownGame {
    static int answer;
    static int top;
    static int bottom;
    static void init();
    static void msg();

    public:
        static void run();
        static bool check(int number);
};

int UpAndDownGame::top = 100;
int UpAndDownGame::bottom = 1;
int UpAndDownGame::answer = 0;

bool Person::go() {
    int number;
    std::cout << name << " >> ";
    std::cin >> number;

    return UpAndDownGame::check(number);
}

void UpAndDownGame::init() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(1, 100);

    int number = dis(gen);
    answer = number;
}

bool UpAndDownGame::check(int number) {
    if(answer == number) {
        return true;
    }
    else
        if(answer > number) {
            bottom = number;
        }
        else 
            top = number;
    return false;    
}

void UpAndDownGame::msg() {
    std::cout << "답은 " << bottom << "과 " << top << "사이에 있습니다." << std::endl;
}

void UpAndDownGame::run() {
    std::string name;
    Person *player[2];
    int i = 0;

    std::cout << "Up & Down 게임을 시작합니다." << std::endl;
    
    for(int i = 0; i < 2; i++) {
        std::cout << "이름을 입력하세요 >> ";
        std::cin >> name;
        player[i] = new Person(name);
    }

    UpAndDownGame::init();

    while(true) {  
        UpAndDownGame::msg();
        if(player[i] -> go()) {
            std::cout << player[i] -> getName() << "이 이겼습니다!!" << std::endl;
            break;
        }
        i++;
        i %= 2;
    }
}

int main() {
    UpAndDownGame::run();
}