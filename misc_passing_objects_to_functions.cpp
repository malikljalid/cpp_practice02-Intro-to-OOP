#include <iostream>

class clsA
{
    public:
    int x;
    int y;
    int z;

    clsA(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    void print(void)
    {
        std::cout << "("<< x << ", " << y << ", " << z << ")" << std::endl;
    }
};

clsA setA(clsA A)
{
    A.x = 1;
    A.y = 2;
    A.z = 3;

    return (A);
}

int main(void)
{
    clsA Z(9, 9, 9);

    Z.print();

    Z = setA(Z);

    Z.print();

    return (0);
}
