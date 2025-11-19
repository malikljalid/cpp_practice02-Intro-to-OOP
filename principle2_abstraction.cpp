#include <iostream>

class clssOOP
{
    private:
    std::string _Encapsulation   = "Checked";
    std::string _Abstraction;
    std::string _Inheritance     = "??";
    std::string _Polymorphism    = "??";


    public:
    const std::string &getEncapsulation(void)
    {
        return (_Encapsulation);
    }

    const std::string &getInheritance(void)
    {
        return (_Inheritance);
    }

    const std::string &getPolymorphism(void)
    {
        return (_Polymorphism);
    }

    const std::string &getAbstraction(void)
    {
        return (_Abstraction);
    }

    void setAbstraction(const std::string &Encapsulation)
    {
        _Encapsulation = Encapsulation;
    }

    void incrementAbstractionWith(const std::string &With)
    {
        _Encapsulation = getAbstraction() + With;
    }
};

int main(void)
{
    clssOOP OOP;

    OOP.setAbstraction("Abstraction = “Show the user what something does, not how it does it.”...   Abstraction is choosing what details the user should NOT worry about.\n\n");
    OOP.incrementAbstractionWith("Abstraction is a shield against complexity... It allows you to use an object without understanding its internals.");
    OOP.incrementAbstractionWith("You give people only the controls they need to succeed, and hide the knobs that can confuse or break things.\n\n");
    OOP.incrementAbstractionWith("Abstraction reduces complexity by keeping your attention on the purpose, not the machinery...  Abstraction is removing everything that distracts from the real purpose.\n");

    return (0);
}
