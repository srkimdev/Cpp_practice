#include <iostream>
#include <string>

int main() {

    std::string sentence;
    int count[26] = {0};
    int sum = 0;

    std::cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << std::endl;
    std::cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << std::endl;
    getline(std::cin, sentence);

    for(int i = 0; i < sentence.length()-1; i++) {
        for(int j = 0; j < 26; j++) {
            if (sentence[i] == char(j+97)) {
                count[j]++;
            }
        }
    }

    for(int i = 0; i < 26; i++) {
        sum = sum + count[i];
    }

    std::cout << "총 알파벳 수 " << sum << std::endl << std::endl;

    for(int i = 0; i < 26; i++) {
        std::string star = "";

        for(int j = 0; j < count[i]; j++) {
            star += "*" ;
        }
        std::cout << char(i+97) << " (" << count[i]<< ")" << "     : " << star << std::endl;
    }
}
