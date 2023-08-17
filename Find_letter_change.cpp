#include <iostream>

std::string Change_capital (std::string a, char b) {

    for(int j = 0; j < a.length(); j++) {
        if(a[j] == b) {
            a[j] = a[j] - 32; 
        }
    }
    return a;
}

int main() {

    std::string a;
    char b;

    std::cout << "변경전 문자열 = ";
    getline(std::cin, a);

    std::cout << "문자 찾기: ";
    std::cin >> b; 

    a = Change_capital(a, b);

    std::cout << "변경후 문자열 = " << a << std::endl;

    return 0;
}