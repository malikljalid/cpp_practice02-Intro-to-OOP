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

    clssPerson(clssPerson &oldPerson)
    {
        setID(oldPerson.getID());
        setFirstName(oldPerson.getFirstName());
        setLastName(oldPerson.getLastName());
    }

    short int  getID(void)
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
    clssPerson Person1(42, "Zach", "Stone");
    clssPerson Person2(Person1);

    std::cout << Person1.getFirstName() << std::endl;
    std::cout << Person1.getLastName()  << std::endl;
    std::cout << Person1.getID() << std::endl;

    std::cout << Person2.getFirstName() << std::endl;
    std::cout << Person2.getLastName()  << std::endl;
    std::cout << Person2.getID() << std::endl;

    clssPerson Person3 = Person1;

    std::cout << Person3.getFirstName() << std::endl;
    std::cout << Person3.getLastName()  << std::endl;
    std::cout << Person3.getID() << std::endl;

    return (0);
}
