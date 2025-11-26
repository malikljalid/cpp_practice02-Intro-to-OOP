#include <iostream>

class clsA
{
    private:
        int _Var1 = 0;

    protected:
        int Var2 = 2;
    public:
        int Var3 = 3;

    friend int sumOfVars(clsA A);
};

int sumOfVars(clsA A)
{
    return (A.Var3 + A.Var2 + A._Var1);
}

int main(void)
{
    clsA A;

    std::cout << "Sum of vars of class A : " << sumOfVars(A) << std::endl;
    return (0);
}
