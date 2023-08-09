#include <iostream>
#include <string>

class Member {
    std::string id;
    std::string pw;

    public:
        Member() {
            id = "null";
            pw = "null";
        };
        Member(std::string id, std::string pw) : id(id), pw(pw) {};
        Member(std::string id) {
            std::string text;
            std::cout << "매개변수가 하나인 Member 생성자 입니다" << std::endl;
            std::cout << "pw 입력 >> ";
            std::cin >> text;
            this -> id = id;
            pw = text;
        };
        ~Member() {};
        bool isCheck() {
            if (id == pw) {
                return true;
            }
            else {
                return false;
            }
        }
        void disPlay() {
            std::cout << "id >> " << id << std::endl;
            std::cout << "pw >> " << pw << std::endl;
        }
};

int main() {
    Member mem;
    Member mem1("C++", "C++");
    Member mem2("Java1");

    mem.disPlay();
    mem1.disPlay();
    std::cout << std::endl;

    if (mem1.isCheck())
        std::cout << "id와 동일한 pw는 사용할 수 없습니다." << std::endl;
    else
        std::cout << "사용 가능한 pw 입니다" << std::endl;
    
    mem2.disPlay();
    return 0;
}