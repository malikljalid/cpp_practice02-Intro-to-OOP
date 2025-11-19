#include <iostream>

class clssOOP
{
    private:
    std::string _Encapsulation;
    std::string _Abstraction     = "??";
    std::string _Inheritance     = "??";
    std::string _Polymorphism    = "??";


    public:
    const std::string &getAbstraction(void)
    {
        return (_Abstraction);
    }

    const std::string &getInheritance(void)
    {
        return (_Inheritance);
    }

    const std::string &getPolymorphism(void)
    {
        return (_Polymorphism);
    }

    const std::string &getEncapsulation(void)
    {
        return (_Encapsulation);
    }

    void setEncapsulation(const std::string &Encapsulation)
    {
        _Encapsulation = Encapsulation;
    }

    void incrementEncapsulationWith(const std::string &With)
    {
        _Encapsulation = getEncapsulation() + With;
    }
};

int main(void)
{
    clssOOP OOP;

    OOP.setEncapsulation("Encapsulation is giving access to behavior, never to the data.. Because data without rules is dangerous.\n\n");
    OOP.setEncapsulation(OOP.getEncapsulation() + "Encapsulation protects meaning, not data.. Because behavior preserves logic, while raw values do not.\n\n");
    OOP.incrementEncapsulationWith("Encapsulation allows your object to decide what can touch its data, how it can be touched, and what cannot be touched at all.\n\n");
    OOP.incrementEncapsulationWith("When attributes are public, your entire program becomes a cheat code.. No rules, No validation, No consistency and No logic.\n\n");
    OOP.incrementEncapsulationWith("WHY WE PROTECT ATTRIBUTES ??\n\nNOT because “hackers will modify them.”\nNOT for “security.”\nNOT because “it's the rule of OOP.”\n\n");
    OOP.incrementEncapsulationWith("We protect attributes because raw data has NO RULES!!\n");

    return (0);
}
