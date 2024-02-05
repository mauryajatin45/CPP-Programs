#include <iostream>
using namespace std;
class rectangle
{
protected:
    int l, h;

public:
    int setrecarea()
    {
        cout << "Enter the length";
        cin >> l;
        cout << "Enter the Breath";
        cin >> h;
    }
    int getrecarea()
    {
        cout << endl
             << "The area of rectangle = " << l * h << endl;
    }
};

class triangle : protected rectangle
{

public:
    int settriarea()
    {
        cout << "Enter the base";
        cin >> l;
        cout << "Enter the height";
        cin >> h;
    }
    int gettriarea()
    {
        cout << endl
             << "The area of Triangle = " << 0.5 * l * h << endl;
    }
};

class square : protected rectangle
{

public:
    int setsquarearea()
    {
        cout << "Enter the length";
        cin >> l;
    }
    int getsquarearea()
    {
        cout << endl
             << "The area of Square = " << l * l;
    }
};
int main()
{
    rectangle r1;
    triangle t1;
    square s1;
    r1.setrecarea();
    r1.getrecarea();
    t1.settriarea();
    t1.gettriarea();
    s1.setsquarearea();
    s1.getsquarearea();
}