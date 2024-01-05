#include <iostream>
using namespace std;
void add()
{
    int a, b;
    cout << "Enter first value:-";
    cin >> a;
    cout << "Enter Second value:-";
    cin >> b;
    cout << "Addition = " << a + b;
}
void sub()
{
    int a, b;
    cout << "Enter first value:-";
    cin >> a;
    cout << "Enter Second value:-";
    cin >> b;
    cout << "Subtraction = " << a - b;
}
void mul()
{
    int a, b;
    cout << "Enter first value:-";
    cin >> a;
    cout << "Enter Second value:-";
    cin >> b;
    cout << "Multiplication = " << a * b;
}
void div()
{
    int a, b;
    cout << "Enter first value:-";
    cin >> a;
    cout << "Enter Second value:-";
    cin >> b;
    cout << "Division = " << a / b;
}
int main()
{
    int cha;
    cout << "Enter symbolic expression to solve the following:\nAddition = 1,\nSubtraction = 2,\nMultiplication = 3,\nDivision = 4";
    cin >> cha;
    switch (cha)
    {
    case 1:
        add();
        break;
    case 2:
        sub();
        break;
    case 3:
        mul();
        break;
    case 4:
        div();
        break;

    default:
        cout << "The value does not match please try again:)";
        break;
    }
}