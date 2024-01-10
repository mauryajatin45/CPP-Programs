#include <iostream>
using namespace std;
int main()
{
    // This Program is to check which number is greater and which one is Greatest among the Given Three Number
    int a = 4;
    int b = 5;
    int c = 6;
    if (a > b)
    {
        if (a > c)
        {
            {
                cout << "A is greatest";
            }
            else
            {
                cout << "C is greater";
            }
        }
        else
        {
            if (a < c)
            {
                cout << "C is greatest";
            }
            if (b > c)
            {
                cout << "B is greatest";
            }
        }
    }
    return 0;
}