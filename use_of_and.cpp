#include <iostream>
using namespace std;
int main()
{
    // Thid program is to illustrate the example of how to use && operator in c++.
    int a, b, c;
    cout << " Enter first value-->"<<endl;
    cin >> a;
    cout << " Enter second value-->"<<endl;
    cin >> b;
    cout << " Enter third value-->"<<endl;
    cin >> c;
    if ((a > b) && (a > c))
    {
        cout << a<<" is the greatest"<<endl;
    }
    else if ((b > a) && (b > c))
    {
        cout << b<<" is the greatest"<<endl;
    }
    else
    {
        cout << c<<" is the greatest"<<endl;
    }
}