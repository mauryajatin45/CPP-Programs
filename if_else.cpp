#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter your age:-";
    cin >> a;
    if (a < 18)
    {
        cout << "you are not eligilable for licience";
    }
    else
    {
        cout << "\nyou are eligilable for licience";
    }
}