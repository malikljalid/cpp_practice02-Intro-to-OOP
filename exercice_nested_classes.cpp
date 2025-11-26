#include <iostream>

class clsIdentity
{
    public:
    std::string FirstName;
    std::string LastName;
    int         Age;
    char        Sex;

    clsIdentity(void)
    {
        Age = 0;
        FirstName = "Zach";
        LastName = "The Magician";
        Sex = 'M';
    }

    clsIdentity(std::string FirstName, std::string LastName, int Age, char Sex)
    {
        this->FirstName = FirstName;
        this->LastName = LastName;
        this->Age = Age;
        this->Sex = Sex;
    }

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
    clsIdentity Identity;
    std::string Country;
    std::string Adresse;

    clsPerson(void) : Identity()
    {
        Country = "";
        Adresse = "";
    }

    clsPerson(clsIdentity Id, std::string Country, std::string Adresse) : Identity(Id)
    {
        this->Country = Country;
        this->Adresse = Adresse;
    }

    clsPerson(std::string FirstName, std::string LastName, int Age, char Sex, std::string Country, std::string Adresse) : Identity(FirstName, LastName, Age, Sex)
    {
        this->Country = Country;
        this->Adresse = Adresse;
    }

    void print(void)
    {
        std::cout << "First Name : " << Identity.FirstName << std::endl;
        std::cout << "Last Name  : " << Identity.LastName  << std::endl;
        std::cout << "Age        : " << Identity.Age << std::endl;
        std::cout << "Sex        : " << Identity.Sex << std::endl;
        std::cout << "Country    : " << Country << std::endl;
        std::cout << "Adresse    : " << Adresse << std::endl;
    }
};

int main(void)
{
    clsPerson Person("Messi", "Lionel", 42, 'M', "North", "No adresse");

    Person.print();
    
    return (0);
}
