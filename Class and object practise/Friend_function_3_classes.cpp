#include <iostream>
using namespace std;

class vishal;

class shraddha;

class jatin
{
private:
    int a;

public:
    int jsetdata()
    {
        cout << "Enter the value of a: " << endl;
        cin >> a;
    }

    int jgetdata()
    {
        cout << "The value of a is: " << a << endl;
    }
    friend void max(jatin j, shraddha s, vishal v);
};

class shraddha
{
private:
    int b;

public:
    int shraddhasetdata()
    {
        cout << "Enter the value of b:" << endl;
        cin >> b;   
    }

    int shraddhagetdata()
    {
        cout << "The value of b is: " << b << endl;
    }

    friend void max(jatin j, shraddha s, vishal v);
};
class vishal
{
private:
    int c;

public:
    int vsetdata()
    {
        cout << "Enter the value of c: " << endl;
        cin >> c;
    }

    int vgetdata()
    {
        cout << "The value of c is : " << c << endl;
    }

    friend void max(jatin j, shraddha s, vishal v);
};

void max(jatin j, shraddha s, vishal v)
{
    if (j.a > s.b)
    {
        cout << "The value of a is greater than b" << endl;
    }
    else
    {
        cout << "The value of b is greater than a" << endl;
    }
    if (j.a > v.c)
    {
        cout << "The value of a is greater than c" << endl;
    }
    else
    {
        cout << "The value of c is greater than a" << endl;
    }
}

int main()
{
    jatin j;
    shraddha s;
    vishal v;
    j.jsetdata();
    j.jgetdata();
    s.shraddhasetdata();
    s.shraddhagetdata();
    v.vsetdata();
    v.vgetdata();
    max(j, s, v);
}