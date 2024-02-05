#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string test;
    ifstream testread("test.txt");
    while (getline(testread, test))
        cout << test;
}