#include <iostream>
#include <vector>
#include <string>
#include <map>

int main() {
    std::map <std::string, std::string> book;
    std::map <std::string, std::string> ::iterator iter;
    std::string word;
    int number;
    std::string english, korean;

    book["apple"] = "사과";
    book["lov"] = "없음";
    book["love"] = "사랑";

    while(true) {
        std::cout << "저장된 단어 개수 " << book.size() << std::endl;
        std::cout << "1. 단어 저장  2. 단어 찾기 >> ";
        std::cin >> number;

        switch(number) {
            case 1:
                std::cout << "저장하고 싶은 단어 >> ";
                std::cin >> english >> korean;
                book[english] = korean;
                std::cout << "저장 완료!" << std::endl;
                break;

            case 2:
                std::cout << "찾고 싶은 단어 >> ";
                std::cin >> word;

                for(iter = book.begin(); iter != book.end(); iter++) {
                    if (word == (iter -> first)) {
                        std::cout << iter -> second << std::endl;
                        break;
                    }
                }
                if (iter==book.end()) {
                    std::cout << "찾는 단어가 없습니다." << std::endl;
                }
                break;
        }
    }
    return 0;
}