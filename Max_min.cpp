// this program is to find weather the number is maximum or minimum
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "This program is to find weather the number is max or min";
    cout << "\nenter first value";
    cin >> a;
    cout << "\nenter Second value";
    cin >> b;
    if (a > b)
    {
        cout << "\nA is Max";
    }
    else if (b > a)
    {
        cout << "\nB is Max";
    }
    else
    {
        cout << "Both are equal";
    }
}