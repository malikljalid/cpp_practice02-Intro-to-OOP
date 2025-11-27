#include <iostream>

class clsPerson
{
    public:
    std::string FirstName;
    std::string LastName;
    int         Age;

    clsPerson(std::string FirstName, std::string LastName, int Age)
    {
        this->FirstName = FirstName;
        this->LastName  = LastName;
        this->Age       = Age;
    }

    static void function(clsPerson Person)
    {
        Person.print();
    }

    void method(void)
    {
        function(*this);
    }

    void print(void)
    {
        std::cout << FirstName << " " << LastName << " is " << Age << " YO" << std::endl;
    }
};

int main(void)
{
    clsPerson Person("Zakaria", "The Magician", 1337);

    Person.print();
    Person.method();

    return (0);
}
