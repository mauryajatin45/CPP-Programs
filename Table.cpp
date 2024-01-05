#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter any number to find the table of it";
    cin >> a;
    for (b = 1; b <= 10; b++)
    {
        cout << a << "x" << b << "=" << a * b << "\n";
    }
}