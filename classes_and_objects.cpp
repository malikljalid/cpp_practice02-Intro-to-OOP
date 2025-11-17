#include <iostream>

class clssPerson
{
    public:
    std::string FirstName;
    std::string LastName;


    std::string FullName(void)
    {
        return (FirstName + " " + LastName);
    }
};

int main(void)
{
    clssPerson Person;

    Person.FirstName = "John";
    Person.LastName  = "Snow";

    std::cout << Person.FullName() << std::endl;

    return (0);
}
