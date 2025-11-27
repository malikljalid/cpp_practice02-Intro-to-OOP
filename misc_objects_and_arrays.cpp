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
    clsA arr[3] = { clsA(0, 0, 0), clsA(2, 2, 2), clsA(4, 4, 4) };

    for (int i = 0; i < 3; i++)
        arr[i].print();

    return (0);
}
