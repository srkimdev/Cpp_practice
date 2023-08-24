#include <iostream>
#include <string>

int main() {
    std::string word;
    char letter;
    int count = 0;

    std::cout << "문자열을 입력하세요 >> ";
    getline(std::cin, word);

    std::cout << "찾고자 하는 문자를 입력하세요 >> ";
    std::cin >> letter;

    for (int i = 0; i < word.length(); i++) {
        if (word[i] == letter) {
            count ++;
        }
    }

    std::cout << letter << "의 개수는 " << count << std::endl;
    return 0;
}
