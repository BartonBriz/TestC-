#include "Bank.h"
#include "Registration.h"
#include "Human.h"
/// <summary>
/// programms use abstract class
/// and inheritance two classes 
/// using methods others class
/// </summary>
/// <returns></returns>

int main()
{
    Registration* registr = new Registration{ "" };
    registr->Data(); 
    registr->Registr();
    std::cout <<"\n------" << registr->getNames()<<"------" << std::endl;
    registr->Info();
}

