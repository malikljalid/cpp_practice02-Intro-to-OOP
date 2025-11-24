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

int main(void)
{
    clsB B;

    B.Func3();
    B.Func4();
    B.Func5();

    B.Var3 = 42;
    std::cout << B.Var3 << std::endl;

    return (0);
}
