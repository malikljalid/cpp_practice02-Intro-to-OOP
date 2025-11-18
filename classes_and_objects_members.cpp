#include <iostream>

class clssPerson
{
    public:
    std::string FirstName;  // this is a : data member.. also called just "Member"
    std::string LastName;   // this is a : data member.. also called just "Member"

    public:
    std::string FullName(void)  // this is a : function member.. also called "Method"
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
