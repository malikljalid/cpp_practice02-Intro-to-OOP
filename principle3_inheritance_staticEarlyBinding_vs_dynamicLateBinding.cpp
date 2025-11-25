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
    clsEmployee Employee;
    clsStudent  Student;

    Employee.print();  // <-- Early/Static Binding
    Student.print();

    std::cout << std::endl;

    clsPerson *Person1 = &Employee;
    clsPerson *Person2 = &Student;

    Person1->print(); // <-- Late/Dynamic Binding
    Person2->print();

    return (0);
}
