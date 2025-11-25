#include <iostream>

class clsPerson
{
    public:
    virtual void print(void)
    {
        std::cout << "Hi i am a person !\n";
    }
};

class clsEmployee : public clsPerson
{
    public:
    void print(void)
    {
        std::cout << "Hi i am an employee!\n";
    }
};

class clsStudent  : public clsPerson
{
    public:
    void print(void)
    {
        std::cout << "Hi i am a student!\n";
    }
};

int main(void)
{
    clsPerson   Person;
    clsEmployee Employee;
    clsStudent  Student;

    Person.print();
    Employee.print();
    Student.print();

    std::cout << std::endl;

    clsPerson *Person1 = &Person;
    clsPerson *Person2 = &Employee;
    clsPerson *Person3 = &Student;

    Person1->print();
    Person2->print();
    Person3->print();

    return (0);
}
