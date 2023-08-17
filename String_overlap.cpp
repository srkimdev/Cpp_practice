#include <iostream>
#include <string>

std::string removeDuplicates(std::string strg) {

    for(int j = 0; j < strg.length(); j++) {
        for(int i = j + 1; i < strg.length(); i++) {
            if(strg[j] == strg[i]) {
                strg.erase(i, 1);
                i--;
            } 
        }
    }
    return strg;
}

int main() {

    std::string strg1;
    std::cout << "문자열을 입력하세요: ";
    getline(std::cin, strg1);

    strg1 = removeDuplicates(strg1);

    std::cout << "중복된 문자를 제거한 결과 입니다" << std::endl;
    std::cout << strg1 << std::endl;
    return 0;
}