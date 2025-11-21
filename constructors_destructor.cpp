#include <iostream>

class clssPerson
{
    private:
    short int   _ID;
    std::string _FirstName;
    std::string _LastName;

    public:
    clssPerson(void)
    {
        setID(0);
        setFirstName("");
        setLastName("");
    }

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

    ~clssPerson(void)
    {
        std::cout << "Person : " << getFirstName() + " " + getLastName() << " data's has been destroyed!\n";
        // we could really need a destructor.. when we have dynamically allocated members in our class.. etheirway class has its own defaul destructor. 
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

void function1(void)
{
    clssPerson Person;

    Person.setFirstName("Ahmed");
    Person.setLastName("Jojo");
}

clssPerson *function2(void)
{
    return (new clssPerson(1337, "Maria", "DB"));
}

int main(void)
{
    clssPerson Person1(42, "Zach", "Stone");

    std::cout << Person1.getFirstName() << std::endl;
    std::cout << Person1.getLastName()  << std::endl;
    std::cout << Person1.getID() << std::endl;

    function1();

    clssPerson *PersonA = function2();

    std::cout << PersonA->getFirstName() << std::endl;
    std::cout << PersonA->getLastName()  << std::endl;
    std::cout << PersonA->getID() << std::endl;

    delete PersonA;

    return (0);
}
