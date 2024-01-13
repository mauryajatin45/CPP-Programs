#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "Enter the total marks obtained-->"<<endl;
    cin >> a;
    cout << "Enter the total marks-->"<<endl;
    cin >> b;
    cout << "The percentage = " << a * 100 / b;
    return 0;
}