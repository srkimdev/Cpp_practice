#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

class Nation {
    std::string nation;
    std::string capital;

    public:
        Nation() {}
        ~Nation() {}
        Nation(std::string nation, std::string capital) : nation(nation), capital(capital) {}
        std::string getNation();
        std::string getCapital();
        bool O_X(std::string i_capital);
};

bool Nation::O_X(std::string i_capital) {
    if (capital == i_capital)
        return true;
    return false;
}

std::string Nation::getNation() {
    return nation;
}

std::string Nation::getCapital() {
    return capital;
}

int main() {
    int num;
    int sum = 0;
    std::string country, capital;

    std::cout << "***** 나라의 수도 맞추기 게임을 시작합니다 *****" << std::endl;
    std::vector<Nation> v;
    std::vector<Nation> ::iterator iter;

    Nation a("대한민국", "서울"), b("일본", "도쿄"), c("체코", "프라하"), d("이탈리아", "로마"), e("프랑스", "파리"), f("이집트", "카이로"), 
    g("인도", "뉴델리"), h("스페인", "마드리드"), i("호주", "캔버라"), j("브라질", "브라질리아"), k("아르헨티나", "부에노스아이레스"), l("카타르", "도하"),
     m("리비아", "트리폴리"), n("베트남", "하노이");

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    v.push_back(e);
    v.push_back(f);
    v.push_back(g);
    v.push_back(h);
    v.push_back(i);
    v.push_back(j);
    v.push_back(k);
    v.push_back(l);
    v.push_back(m);
    v.push_back(n);

    while(true) {
        std::cout << "| 1. 정보입력 | 2. 퀴즈 | 3. 정답보기 | 4. 종료 | >> ";
        std::cin >> num;

        if (num == 4)
            break;

        std::cout << "현재 " << v.size() << "개의 나라가 입력되어 있습니다." << std::endl;

        switch(num) {
            case 1: { //case 문 안에서 변수를 초기화하면 괄호를 해줘야 한다.
                std::cout << "나라와 수도를 입력하세요(no no이면 입력 끝) >> " << std::endl;
                std::cout << v.size() + 1 << " >> ";
                std::cin >> country >> capital;

                if((country == "no") && (capital == "no"))
                    break; 
                else {
                    Nation p(country, capital);
                    v.push_back(p);
                    break;
                }
            }
                
            case 2:
                for(iter = v.begin(); iter != v.end(); iter++) {
                    std::cout << iter -> getNation() << "의 수도는? >> ";
                    std::cin >> capital;
                    if(iter -> O_X(capital)) {
                        std::cout << "정답입니다!" << std::endl;
                        sum++;
                    }
                    else {
                        std::cout << "틀렸습니다!" << std::endl;
                    }

                    if(capital == "exit")
                        break;
                }
                std::cout << "총 " << sum << "개 맞추셨습니다!" << std::endl;
                break;

            case 3:
                for(iter = v.begin(); iter != v.end(); iter++) {
                    std::cout << iter -> getNation() << "| " << iter -> getCapital() << std::endl;
                }
        }
    }
    return 0;
}