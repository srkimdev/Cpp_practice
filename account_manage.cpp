#include <iostream>
#include <string>

class account
{
    int money;
    std::string who;
    int when;

    public:
        account(std::string who_1, int when_1, int money_1);
        int deposit(int a);
        int withdraw(int a);
        int inqi();
        std::string getOwner();
        ~account();
};

int main()
{

    account a("성률", 2021, 50000);
    int menu, money;
    std::cout << "menu : 1. 입금  2. 출금  3. 조회 >> ";
    std::cin >> menu;

    switch (menu)
    {
    case 1:
        std::cout << "입금액 >> ";
        std::cin >> money;
        a.deposit(money);
        std::cout << a.getOwner() << "의 잔액은 " << a.inqi() << std::endl;
        break;
    case 2:
        std::cout << "출금액 >> ";
        std::cin >> money;
        a.withdraw(money);
        std::cout << a.getOwner() << "의 잔액은 " << a.inqi() << std::endl;
        break;
    case 3:
        std::cout << a.getOwner() << "의 잔액은 " << a.inqi() << std::endl;
        break;
    }
    return 0;
}

account::account(std::string who_1, int when_1, int money_1)
{
    who = who_1;
    when = when_1;
    money = money_1;
}

int account::deposit(int a)
{
    money = money + a;
    return money;
}

int account::withdraw(int a)
{
    money = money - a;
    return money;
}

int account::inqi()
{
    return money;
}

std::string account::getOwner()
{
    return who;
}

account::~account()
{
    std::cout << when << " : 객체 소멸" << std::endl;
}