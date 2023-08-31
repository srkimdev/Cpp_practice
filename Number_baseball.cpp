#include <iostream>
#include <random>
#include <unistd.h>

class Baseball {
    int answer[4];

    public:
        Baseball() {}
        Baseball(int x[]);
        void run();
};

Baseball::Baseball(int x[]) {
    for(int i = 0; i < 4; i++) {
        answer[i] = x[i];
    }
}

void Baseball::run() {
    int num[4];
    int sum = 0;

    while(true) {
        int ball = 0;
        int strike = 0;
        
        std::cout << "숫자 4개를 입력해주세요 >> ";
        std::cin >> num[0] >> num[1] >> num[2] >> num[3]; 

        for(int i = 0; i < 4; i++) { //정답
            for(int j = 0; j < 4; j++) { //입력값
                if((i == j) && (answer[i] == num[j])) {
                    strike ++;
                }
                else if((i != j) && (answer[i] == num[j]))
                    ball ++;
            }
        } 
        if (strike == 0 && ball == 0) {
            std::cout << "Paul" << std::endl;
            sum ++;
        }
        else if (strike == 4) {
            std::cout << "정답입니다!!" << std::endl;
            std::cout << "총 " << sum + 1 << "번 시도하였습니다." << std::endl;
            break;
        }
        else
            std::cout << strike << "S " << ball << "B" << std::endl;
            sum++;
    }
}

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 9);
    int x[4] = {0};
    int a;

    std::cout << "숫자 야구 게임을 시작합니다." << std::endl;

    std::cout << "숫자 4개가 생성중입니다. 잠시만 기다려 주세요..." << std::endl;
    sleep(2);

    for (int i = 0; i < 4; i++) {	// 로또번호 뽑기
        a = dis(gen);
        x[i] = a;
        for (int j = 0; j < i; j++) {
            if (x[i] == x[j]) 
                i--;
        }
    }

    Baseball baseball(x);

    baseball.run();
    return 0;
}
