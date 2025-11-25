#include <iostream>

class clsPolymorphism
{
    public:
    std::string FunctionOverloading = "Function Overloading\n";
    std::string OperatorOverloading = "Operator Overloading\n";
    std::string FunctionOverriding  = "Function Overriding\n";
    std::string VirtualFunctions    = "Virtual Functions\n";
};

int main(void)
{
    clsPolymorphism ManyForms;

    std::cout << "Polymorphism can be achieved by : \n";

    std::cout << ManyForms.FunctionOverloading << std::endl;
    std::cout << ManyForms.OperatorOverloading << std::endl;
    std::cout << ManyForms.FunctionOverriding << std::endl;
    std::cout << ManyForms.VirtualFunctions << std::endl;

    return (0);
}
