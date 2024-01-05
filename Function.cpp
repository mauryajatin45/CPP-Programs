#include <iostream>
using namespace std;
void square()
{
    int a;
    cout << "This program is to find the square of a given number.\nEnter any number:- ";
    cin >> a;
    cout << "square = " << a * a;
}
int main()
{
    square();
}