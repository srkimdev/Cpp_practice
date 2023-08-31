/* 로또 프로그램
1. 사용자는 1~45번에 해당하는 번호를 7개 입력
2. 추첨을 시작하겠습니다. -> 엔터를 누르면 번호가 하나씩 나오도록
3. 사용자가 쓴 번호와 로또에서 나온 번호의 개수를 조합하여 순위를 결정
*/

#include <iostream>
#include <random>

int main() {
    int num[7];
    int lot_num[7] = {0};
    int sum = 0;
    int b;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(1, 45);

    std::cout << "Lotto 게임을 시작합니다." << std::endl;
    std::cout << "1등 : 6개 번호 일치" << std::endl;
    std::cout << "2등 : 5개 번호 일치" << std::endl;
    std::cout << "3등 : 4개 번호 일치" << std::endl;
    std::cout << "4등 : 4개 번호 일치" << std::endl;
    std::cout << "5등 : 3개 번호 일치" << std::endl;

    std::cout << "1 ~ 45사이의 원하는 번호 7개를 입력해주세요 >> ";
    std::cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4] >> num[5] >> num[6];
    std::cout << "<enter>를 누르시면 번호가 출력됩니다.";
    std::cin.ignore();
    
    for(int i = 0; i < 6; i++) {
        std::cin.get();
        int a = dis(gen);

        lot_num[i] = a;
        std::cout << a;
    }

    std::cout << std::endl;
    std::cout << "마지막 보너스 번호는??";
    std::cin.get();
    int a = dis(gen);

    lot_num[6] = a;
    std::cout << a << std::endl;
    
    for(int i = 0; i < 7; i++) {
        for(int j = 0; j < 7; j++) {
            if(lot_num[i] == num[j]) {
                sum ++;
            }
            if (i == 6 && lot_num[i] == num[j]) {
                b = 1;
            }
        }
    }

    switch(sum) {
        case 3:
            std::cout << "총 " << sum << "개를 맞추셔서 5등 입니다!" << std::endl;
            break;
        case 4:
            if (b == 1) {
                std::cout << "총 " << sum << "개를 맞추셔서 4등 입니다!" << std::endl;
                break;
            }
            else {
                std::cout << "총 " << sum << "개를 맞추셔서 3등 입니다!" << std::endl;
                break;
            }
        case 5:
            std::cout << "총 " << sum << "개를 맞추셔서 2등 입니다!" << std::endl;
            break;
        case 6:
            std::cout << "총 " << sum << "개를 맞추셔서 1등 입니다!" << std::endl;
            std::cout << "축하드립니다!~~" << std::endl;
        default:
            std::cout << "총 " << sum << "개를 맞추셔서 등수가 없습니다." << std::endl;
            break;
    }
    return 0;
}