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

    int getVar(void)
    {
        return (_Var);
    }

    void setVar(int Value)
    {
        _Var = Value;
    }

    int getCounter(void)
    {
        return (_Counter);
    }

    void setCounter(int Value)
    {
        _Counter = Value;
    }

    void printMembers(void)
    {
        std::cout << "Var     : " << getVar() << std::endl;
        std::cout << "Counter : " << _Counter << std::endl;
    }
};

int clsA::_Counter = 0;  // static member _Counter is shared between all the objects of clsA.. it must be initialized outside the class!

int main(void)
{
    clsA A;

    A.setVar(20);
    A.printMembers();

    clsA B;

    B.setVar(13);
    B.setCounter(7);
    B.printMembers();

    clsA C;

    C.setVar(6);
    C.printMembers();

    return (0);
}
