#include <iostream>
using namespace std;
void add(int a, int b)
{
    cout << "Add=" << a + b << endl;
}
void add(int a, int b, int c)
{
    cout << "Add=" << a + b + c << endl;
}
int main()
{
    add(22, 24);
    add(2, 2, 2);
    // In this we create more than 1 function and the number of arguments should be changed then it is knoen as function overloading
        return 0;
}