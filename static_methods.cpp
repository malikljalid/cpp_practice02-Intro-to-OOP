#include <iostream>

class clsA
{
    private:
    int         _Var;
    static int  _Counter;

    public:

    clsA(void)
    {
        _Var = 0;
        _Counter++;
    }

    ~clsA(void) {};

    static int getCounter(void)
    {
        return (_Counter);
    }

    static void setCounter(int Value)
    {
        _Counter = Value;
    }

    int getVar(void)
    {
        return (_Var);
    }

    void setVar(int Value)
    {
        _Var = Value;
    }

    void printMembers(void)
    {
        std::cout << "Var     : " << getVar() << std::endl;
        std::cout << "Counter : " << _Counter << std::endl;
    }
};

int clsA::_Counter = 0;

int main(void)
{
    std::cout << "Counter : " << clsA::getCounter() << std::endl; // static member methods can be called direcatly by the class name.. no need for an object!!

    clsA::setCounter(42);
    std::cout << "Counter : " << clsA::getCounter() << std::endl;

    clsA::setCounter(1337);
    std::cout << "Counter : " << clsA::getCounter() << std::endl;

    return (0);
}
