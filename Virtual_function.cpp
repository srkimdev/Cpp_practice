#include <iostream>

class Base {
    std::string s;

    public:
        Base() {
            std::cout << "기반 클래스" << std::endl;
        }

        virtual void what() {
            std::cout << "기반 클래스의 what()" << std::endl;
        }
};

class Derived : public Base {
    std::string s;

    public:
        Derived() : Base() {
            std::cout << "파생 클래스" << std::endl;
        }
        
        void what() {
            std::cout << "파생 클래스의 what()" << std::endl;
        }
};

int main() {
    Base p;
    Derived c;

    Base* p_c = &c;
    Base* p_p = &p;

    std::cout << "=== 실제 객체는 Base ===" << std::endl;
    p_p -> what(); 

    std::cout << "=== 실제 객체는 Derived ===" << std::endl;
    p_c -> what();

    return 0;
}

//기반 클래스
//기반 클래스
//파생 클래스
//=== 실제 객체는 Base ===
//기반
//=== 실제 객체는 Derived ===
//기반