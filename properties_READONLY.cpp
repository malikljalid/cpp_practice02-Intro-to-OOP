#include <iostream>

class clssPerson
{
    private:
    short int   _ID = 1337;         // ID Member have only getter property method.. that's called ONLY READ property, developers cannot update or modify _ID but they can read it
    std::string _FirstName;
    std::string _LastName;

    public:
    short int   getID(void)
    {
        return (_ID);
    }

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
    std::cout << Person.getLastName()  << std::endl;
    std::cout << Person.getID() << std::endl;

    return (0);
}
