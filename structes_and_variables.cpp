#include <iostream>

// this is called a struct.. its the blueprint of our data type stPerson
struct stPerson
{
    std::string FirstName;    // this is a member of the struct
    std::string LastName;    //  this is a member of the struct
};

// this called a method of the the struct because its takes the struct as param and return related information to it
std::string PersonFullName(const stPerson &Person)
{
    return (Person.FirstName + " " + Person.LastName);
}
// but this method.. cannot be inside our struct!! 
// and if we need to use it.. we will always need to pass the struct to it as param!!

int main(void)
{
    stPerson Person;    // this is called an variable of type stPerson which is our struct.. we call this also an instance of the struct

    Person.FirstName = "John";
    Person.LastName  = "Snow";

    std::cout << PersonFullName(Person) << std::endl;  // here we passed struct to its method to use it..

    return (0);
}
