// Not working

#include <iostream>
using namespace std;
int main()
{
    int a, c, d;
    cout << "Enter any number to find the factorial of-->" << endl;
    cin >> a;
    int i = 1;
    for (i; i <= a; i++)
    {
        c = i * a;
        d = c * c;
        cout << "The factorail is" << c;
    }

    return 0;
}