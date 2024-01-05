#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter any number for a loop";
    cin >> b;
    for (a = 1; a <= b; a++)
    {
        cout << "\n" << a<<"-->"<<a*a;
    }
}
