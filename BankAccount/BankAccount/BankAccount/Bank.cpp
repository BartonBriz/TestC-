#include "Bank.h"

void Bank::getInfo()
{
    std::cout << "Balance: " << setAmount(_money)<<"$";
}

float Bank::setAmount(float n)
{
    _money = n;
    return n;
}

float Bank::getMoney()
{
    return 0.0f;
}

void Bank::Withdraw()
{
    float withdraw;
    std::cout << "\nwhat amount do you want to withdraw? " << std::endl;
    std::cout << "You have ";
    getInfo();
    std::cout << "\nEnter withdraw money: ";
    std::cin >> withdraw;
    if (_money < withdraw)
    {
        std::cout << "insufficient amount!!!" << std::endl;
        getInfo();
    }
    else if (_money >= withdraw)
    {
        float summ = _money - withdraw;
        setAmount(summ);
        getInfo();
    }

}
