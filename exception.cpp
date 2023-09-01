#include <iostream>

int main() {
    int n, sum, average;
    while(true) {
        std::cout << "합을 입력하세요 >> ";
        std::cin >> sum;
        std::cout << "인원 수를 입력하세요 >> ";
        std::cin >> n;

        try {
            if (n <= 0)
                throw n;
            else
                average = sum / n;
        }
        catch (int x) {
            std::cout << "예외 발생!!" << x << "으로 나눌 수 없음" << std::endl;
            average = 0;
            std::cout << std::endl;
            continue;
        }
        std::cout << "평균 = " << average << std::endl << std::endl;
    }
}