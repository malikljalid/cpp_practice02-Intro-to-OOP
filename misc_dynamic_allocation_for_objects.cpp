#include <iostream>
#include <vector>

class clsA
{
    public:
    int x;
    int y;
    int z;

    clsA(void)
    {
    }

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


int main(void)
{
    clsA *arr = new clsA[3];

    for (int i = 0; i < 3; i++)
        arr[i] = clsA(i, i+1, i+2);

    for (int i = 0; i < 3; i++)
        arr->print();

    return (0);
}
