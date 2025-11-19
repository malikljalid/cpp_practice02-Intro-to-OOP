#include <iostream>

class clssPerson
{
    private:
    std::string _FirstName;
    std::string _LastName;

    public:
    std::string getFirstName(void)
    {
        return (_FirstName);
    }

    std::string getLastName(void)
    {
        return (_LastName);
    }

    void        setFirstName(std::string FirstName)
    {
        _FirstName = FirstName;
    }

    void        setLastName(std::string LastName)
    {
        _LastName  = LastName;
    }
};

int main(void)
{
    clssPerson Person;

    Person.setFirstName("Zakaria");
    Person.setLastName("Dazzler");

    std::cout << Person.getFirstName() << std::endl;
    std::cout << Person.getLastName() << std::endl;

    return (0);
}
