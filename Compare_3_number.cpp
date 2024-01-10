#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "This progeram will find the Greatest number between the three"<<endl;
    cout << "Enter first value-->"<<endl;
    cin >> a;
    cout << "Enter second value-->"<<endl;
    cin >> b;
    cout << "Enter third value-->"<<endl;
    cin >> c;
    // This Program is to check which number is greater and which one is Greatest among the Given Three Number

    if (a > b)
    {
        if (a > c)
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
        if (b < c)
        {
            cout << "B is greatest";
        }
        else
        {
            cout << "C is greatest";
        }
    }

    return 0;
}