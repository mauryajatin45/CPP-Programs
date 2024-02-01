#include <iostream>
using namespace std;

class jatin; // forward declaration

class vishal
{
private:
    int a, b;

public:
    int vsetdata()
    {
        cout << "Enter a -->" << endl;
        cin >> a;
    }
    int vgetresult()
    {
        cout << "a = " << a << endl;
    }
    friend void max(jatin j1, vishal v1);
};

class jatin
{
private:
    int a, b;

public:
    int jsetdata()
    {
        cout << "Enter b -->" << endl;
        cin >> b;
    }
    int jgetresult()
    {
        cout << "b = " << b << endl;
    }
    friend void max(jatin j1, vishal v1);
};

void max(jatin j1, vishal v1)
{
    if (v1.a > j1.b)
    {
        cout << "A is greater";
    }
    else
    {
        cout << "B is greater";
    }
}

int main()
{
    jatin j1;
    vishal v1;
    v1.vsetdata();
    v1.vgetresult();
    j1.jsetdata();
    j1.jgetresult();
    max(j1, v1);
}