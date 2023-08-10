#include <iostream>
#include <string>
#include <random>

class Player {
    int num;
    std::string* name;

    public:
        Player(int num) {
            this -> num = num;
            name = new std::string[num];
        }
        ~Player() {}
        void type_name();
        void random();
};

void Player::type_name() {
    std::string person;
    for (int i = 0; i < num; i++) {
        std::cout << "선수 이름을 입력해주세요 >> ";
        std::cin >> person;
        name[i] = person;
    }
}

void Player::random() {
    int i = 0;

    while(true) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> dis(1, 3);

        int a = dis(gen);
        int b = dis(gen);
        int c = dis(gen);

        std::cout << name[i] << ": <Enter> ";
        std::cin.get();

        std::cout << a << "     " << b << "     " << c << "     ";

        if ((a == b) && (b == c) && (c == a)) {
            std::cout << name[i] << "님 승리!!" << std::endl;
            break;
        }
        else
            std::cout << "아쉽군요!" << std::endl;
        i++;
        if (i == num) {
            i = 0;
        }
    }
}

int main() {
    std::cout << "***** 겜블링 게임을 시작합니다 *****" << std::endl;
    int ber;
    std::cout << "참여 인원 수를 입력해주세요 >> ";
    std::cin >> ber;

    Player player(ber);
    player.type_name();
    std::cin.ignore();
    player.random();
    
    return 0;
}