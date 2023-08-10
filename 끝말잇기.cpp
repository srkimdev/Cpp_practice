#include <iostream>
#include <string>

int main() {
    int num;
    std::string* word = new std::string[num];
    std::string* name = new std::string[num];
    std::string person;
    std::string text;
    std::string word2;
    int i = 0;

    std::cout << "끝말 잇기 게임을 시작합니다" << std::endl;
    std::cout << "게임에 참가하는 인원은 몇명입니까? ";
    std::cin >> num;

    for(int i=0; i<num; i++) {
        std::cout << "참가자의 이름을 입력하세요. 빈칸 없이 >> ";
        std::cin >> person;
        name[i] = person;
    }

    std::cout << "시작하는 단어는 tree입니다" << std::endl;
    word[0] = "tree";
    
    while(true) {
        std::cout << name[i] << " >> ";
        std::cin >> text;
        word2 = word[i];

        if (word2[word2.length()-1] != text[0]) {
            std::cout << name[i] << "이 졌습니다" << std::endl;
            break;
        }
        i++;
        
        if (i == num)
            i = 0;
        word[i] = text;
    }

    return 0;
}