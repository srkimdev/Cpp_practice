#include <iostream>

class CoffeeMachine {
    int coffee, water, sugar;

    public:
        CoffeeMachine(int coffee, int water, int sugar);
        void drinkEspresso();
        void drinkAmericano();
        void drinkSugarCoffee();
        void fill();
        void show();
};

CoffeeMachine::CoffeeMachine (int coffee, int water, int sugar) {
    this -> coffee = coffee;
    this -> water = water;
    this -> sugar = sugar;
}

void CoffeeMachine::drinkEspresso() {
    coffee -= 1;
    water -= 1;
}

void CoffeeMachine::drinkAmericano() {
    coffee -= 1;
    water -= 2;
}

void CoffeeMachine::drinkSugarCoffee() {
    coffee -= 1;
    water -= 2;
    sugar -= 1;
}

void CoffeeMachine::fill() {
    coffee = 10;
    water = 10;
    sugar = 10;
}

void CoffeeMachine::show() {
    std::cout << "커피 머신 상태, 커피:" << coffee << "  물:" << water << "  설탕:" << sugar << std::endl;
}

int main() {
    int coffee, water, sugar;
    int opt;

    std::cout << "커피머신에 커피, 물, 설탕을 채워주세요 >> ";
    std::cin >> coffee >> water >> sugar;
    CoffeeMachine java(coffee, water, sugar);

    while(true) {
        std::cout << "옵션을 선택해 주세요." << std::endl;
        std::cout << "1. 에스프레소  2. 아메리카노  3. 믹스커피  4. 채우기 >> ";
        std::cin >> opt;

        switch(opt) {
            case 1:
                java.drinkEspresso();
                java.show();
                break;
            case 2:
                java.drinkAmericano();
                java.show();
                break;
            case 3:
                java.drinkSugarCoffee();
                java.show();
                break;
            case 4:
                java.fill();
                java.show();
                break;
        }
    }
    return 0;
}