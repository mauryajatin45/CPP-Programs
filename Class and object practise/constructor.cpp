#include <iostream>
using namespace std;
class maths
{
private:
    int a, b, c;

public:
    maths() // Default, without argument constructor
    {
        a = 50, b = 30, c = 40;
    }
    maths(int x, int y, int z) // with argument constructor, parameterized
    {
        a = x;
        b = y;
        c = z;
    }
    void printresult()
    {
        cout << "a = " << a << " b = " << b << " c = " << c << endl;
    }
};
int main()
{
    maths m1, m2, m3;
    maths m4(5, 6, 7), m5(8, 9, 10);
    m1.printresult();
    m2.printresult();
    m3.printresult();
    m4.printresult();
    m5.printresult();
}