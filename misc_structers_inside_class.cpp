#include <iostream>

struct stIdentity
{
    std::string FirstName;
    std::string LastName;
    int         Age;
    char        Sex;
};

class clsPerson
{
    public:
    stIdentity  Identity;
    std::string Country;
    std::string Adresse;
};

int main(void)
{
    clsPerson Person;

    Person.Identity.FirstName = "Zach";
    Person.Identity.LastName = "The Magician";
    Person.Identity.Age = 1337;
    Person.Identity.Sex = 'M';

    return (0);
}
