#include <iostream>

struct stPerson
{
    std::string FirstName;
    std::string LastName;
};

std::string PersonFullName(const stPerson &Person)
{
    return (Person.FirstName + " " + Person.LastName);
}

class clssPerson
{
    public:
    std::string FirstName;
    std::string LastName;


    std::string FullName(void)
    {
        return (FirstName + " " + LastName);
    }
};

int main(void)
{
    stPerson Person1;
    stPerson Person2;

    Person1.FirstName = "John";
    Person1.LastName  = "Snow";

    Person2.FirstName = "Lionel";
    Person2.LastName  = "Messi";

    std::cout << PersonFullName(Person1) << std::endl;
    std::cout << PersonFullName(Person2) << std::endl;

    // in this exmaple of struct use case : Person1 and Person2 has their own instance and place allocated in Memory
    //                                      But for the share the usage of the method PersonFullName.. since it's applied the sum logic to the same input

    clssPerson _Person1;
    clssPerson _Person2;

    _Person1.FirstName = "John";
    _Person1.LastName  = "Snow";

    _Person2.FirstName = "Lionel";
    _Person2.LastName  = "Messi";

    std::cout << _Person1.FullName() << std::endl;
    std::cout << _Person2.FullName() << std::endl;

    // that is exaclty the same for class use case : even that member functions or methods are inside the class..
    //                                               they are not allocated for each object instance.. but they are allocated once and then shared between all the objects
    //                                               But for data members.. each object has its own allocated area in memory for their own data member

    return (0);
}
