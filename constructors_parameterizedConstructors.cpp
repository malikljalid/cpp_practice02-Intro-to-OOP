#include <iostream>

class clssPerson
{
    private:
    short int   _ID;
    std::string _FirstName;
    std::string _LastName;

    public:
    clssPerson(short int ID, std::string FirstName, std::string LastName)
    {
        setID(ID);
        setFirstName(FirstName);
        setLastName(LastName);
    }

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

    void        setID(short int ID)
    {
        _ID = ID;
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
    clssPerson Person(42, "Zakaria", "Ichigo");

    std::cout << Person.getFirstName() << std::endl;
    std::cout << Person.getLastName()  << std::endl;
    std::cout << Person.getID() << std::endl;

    return (0);
}
