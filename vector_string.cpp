#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> vs; 
    vs.push_back("java");
    vs.push_back("C++");
    vs.push_back("software");
    vs.push_back("script");

    std::vector<std::string>::iterator it;
    std::cout << "---문자열 벡터 원소 출력---" << std::endl;
    for (it = vs.begin(); it != vs.end(); it++)
        std::cout << *it << std::endl;
    
    std::string str;
    std::cout << "---문자열 벡터 원소 제거---" << std::endl;
    std::cout << "제거할 문자열 >> ";
    getline(std::cin, str);

    for(it = vs.begin(); it != vs.end(); it++) {
        if(*it == str) {
            vs.erase(it);
            break;
        }
    }

    for (it = vs.begin(); it != vs.end(); it++)
        std::cout << *it << std::endl;
}