#include <iostream>
#include <vector>

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


int main(void)
{
    clsA Z(9, 9, 9);
    clsA A(0, 0, 0);
    clsA C(1, 2, 3);

    std::vector <clsA> vPoints;
    
    vPoints.push_back(Z);
    vPoints.push_back(A);
    vPoints.push_back(C);
    vPoints.push_back(clsA(8, 8, 1));

    for (std::vector <clsA>::iterator i = vPoints.begin(); i != vPoints.end(); i++)
        (*i).print();

    return (0);
}
