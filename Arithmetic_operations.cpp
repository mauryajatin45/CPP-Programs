#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, f;
    cout << "Enter any two number to solve all the arithmetic operations";
    cout << "\nEnter First value";
    cin >> a;
    cout << "\nEnter Second value";
    cin >> b;
    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    cout << "\nAddition is" << c;
    cout << "\nSubstraction is" << d;
    cout << "\nMultiplication is" << e;
    cout << "\nDivision is" << f;
    return 0;
}