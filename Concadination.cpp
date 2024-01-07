#include <iostream>
using namespace std;
int main()
{
    string a, b, c;
    cout << "This program is to do the concadination of a string" << endl;
    cout << "Enter your First Name:-" << endl;
    cin >> a;
    cout << "Enter your Last Name:-" << endl;
    cin >> b;
    c = a + " " + b;
    cout << "Your Full Name is " << c << endl;
    return 0;
}