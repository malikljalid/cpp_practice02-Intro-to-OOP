#include <iostream>

class clsPerson
{
public:
    std::string FullName="Mohammed Abu-Hadhoud";
};

class clsEmployee : public clsPerson
{
public:
    std::string Title = "CEO";
};

int main()
{
    clsEmployee Employee1;

    //UPCASTING : this will convert employee to person.
    clsPerson *Person1 = &Employee1;
    std::cout << Person1->FullName << std::endl;
   

    //clsPerson Person2;
    //cout << Person2.FullName << endl;

    //DOWNCASTING : you cannot convert person to employee
    //clsEmployee* Employee2 = &Person2;

    return (0);
}
