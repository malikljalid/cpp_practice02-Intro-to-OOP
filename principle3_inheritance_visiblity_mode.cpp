#include <iostream>

class clsA
{
    private:
    int _Var1 = 1;
    void _Func(void)
    {
        std::cout << "Function 1 : value of Var 1 --> " << _Var1 << std::endl;
    }

    protected:
    int Var2 = 2;
    void Func2(void)
    {
        std::cout << "Function 2\n";
    }

    public:
    int Var3 = 3;
    void Func3(void)
    {
        std::cout << "Function 3\n";
    }
};

class clsB : public clsA
{
    public:
    void Func4(void)
    {
        Func2();
        clsA::Func2();
        clsA::Func3();
    }

    void Func5(void)
    {
        std::cout << Var2 << std::endl;
        std::cout << clsA::Var2 << std::endl;
        std::cout << clsA::Var3 << std::endl;
        std::cout << Var3 << std::endl;
    }
};

class clsC : protected clsA
{
    public:
    void Func6(void)
    {
        std::cout << "value of var 2 of clsA from cslC : " << clsA::Var2 << std::endl;
        std::cout << "value of var 3 of clsA from cslC : " << Var3 << std::endl;
    }

    void Func7(void)
    {
        clsA::Func2();
        Func3();
    }
};

class clsD : private clsA
{
    public:
    void Func8()
    {
        std::cout << clsA::Var2;
    }
};

class clsZ : public clsC
{
    public:
    void Func9(void)
    {
        clsC::Var2 = 21;
        clsC::Var3 = 13;
    }
};

class clsX : public clsD
{
    public:
    void Func10(void)
    {
        std::cout << "you cannot inherte var2 and var3 from clsA but you can inherte Func8() \n";
        clsD::Func8();
    }
};

int main(void)
{
    clsB B;

    B.Func3();
    B.Func4();
    B.Func5();

    B.Var3 = 42;
    std::cout << B.Var3 << std::endl;

    clsC C;

    C.Func6();
    C.Func7();

    clsD D;

    D.Func8();

    return (0);
}
