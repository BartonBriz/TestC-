
#include "Bank.h"
/// <summary>
/// programms 
/// use methods show balance
/// use methods set money
/// methods withdraw money
/// </summary>
/// <returns></returns>
int main()
{
	float money;
	std::cout << "Enter the top-up amount ->  ";
	std::cin >> money;
	std::cout << "You have replenished the amount: " << money <<"$"<< std::endl;
	Bank a1;
	a1.setAmount(money);
	a1.getInfo();
	a1.Withdraw();
	
}
