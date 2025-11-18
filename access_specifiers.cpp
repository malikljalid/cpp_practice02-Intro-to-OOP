#include <iostream>

class cssPerson
{
    private:
    char        Sex;

    bool        isMale(void)
    {
        return (Sex == 'M');
    }

    bool        isFemale(void)
    {
        return (Sex == 'F');
    }


    protected:
    int         Age;

    int         AgeAfterGraduat(void)
    {
        return (Age + 5);
    }


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
    cssPerson Person;

    Person.FirstName = "Jack";                      // FirstName member is accessible
    Person.LastName  = "Lacroix";                   // LastName  member is accessible

    std::cout << Person.FullName() << std::endl;    // FullName() method is accessible

    // Person.Age = 19;      
    // int AgeAfterGardation = Person.AgeAfterGraduat();
    // Age and AgeAfterGraduat() protected memebers are not accessible outstide the class.. but we can access them through a child class of cssPerson

    // Person.Sex = 'M';
    // if (Person.isMale())
    //     std::cout << "Person is male\n";
    //Sex and isMale() private members are not accessible anywhere nether the class cssPerson itself 
    

    return (0);
}
