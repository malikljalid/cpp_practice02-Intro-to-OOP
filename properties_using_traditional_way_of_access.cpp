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

    // __declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;
    // This feature does not exist in standard C++ ... only works in Visual Studio (MSVC compiler).
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
