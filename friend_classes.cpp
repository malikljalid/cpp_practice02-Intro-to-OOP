#include <iostream>

class clsA
{
    private:
        int _Var1 = 0;

    protected:
        int Var2 = 2;
    public:
        int Var3 = 3;

    friend class clsB;
};

class clsB
{
    public:
    void method1(clsA A)
    {
        std::cout << "Public    Var 1 : " << A.Var3 << std::endl;
        std::cout << "Protected Var 2 : " << A.Var2 << std::endl;
        std::cout << "Private   Var 1 : " << A._Var1 << std::endl;
    }
};

int main(void)
{
    clsA A;
    clsB B;

    B.method1(A);

    return (0);
}
