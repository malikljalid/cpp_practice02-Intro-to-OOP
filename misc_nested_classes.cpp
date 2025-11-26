#include <iostream>

class clsIdentity
{
    public:
    std::string FirstName;
    std::string LastName;
    int         Age;
    char        Sex;

    void print(void)
    {
        std::cout << FirstName << std::endl;
        std::cout << LastName  << std::endl;
        std::cout << Age << std::endl;
        std::cout << Sex << std::endl;
    }
};

class clsPerson
{
    public:
    clsIdentity  Identity;
    std::string Country;
    std::string Adresse;

    clsPerson(void)
    {
        Identity.Age = 0;
        Identity.FirstName = "Zach";
        Identity.LastName = "The Magician";
        Identity.Sex = 'M';

        Country = "";
        Adresse = "";
    }
};

int main(void)
{
    clsPerson Person;

    Person.Identity.print();
    
    return (0);
}
