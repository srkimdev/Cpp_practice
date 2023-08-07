#include <iostream>
#include <string>

int main() {
    std::string coffee;
    int num;
    int cash = 0;

    std::cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << std::endl;

    while(cash <= 20000) {
        std::cout << "주문>> ";
        std::cin >> coffee >> num; 

        if (coffee == "에스프레소") {
            std::cout << num * 2000 << "원 입니다. 맛있게 드세요" << std::endl;        
            cash += num * 2000;
        }

        else if (coffee == "아메리카노") {
            std::cout << num * 2300 << "원 입니다. 맛있게 드세요" << std::endl;
            cash += num * 2300;
        }

        else if (coffee == "카푸치노") {
            std::cout << num * 2500 << "원 입니다. 맛있게 드세요" << std::endl;
            cash += num * 2500;
        }
        else
            std::cout << "없는 커피입니다. 다시 입력해주세요" << std::endl;
    }

    std::cout << "오늘 " << cash << "원을 판매하여 카페를 닫습니다. 내일 봐요~" << std::endl;
}
