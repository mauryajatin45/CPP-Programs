#include <iostream>
using namespace std;

class jatin
{
private:
    int count = 10;

public:
    void operator++()
    {
        count = count + 1;
    }
    display()
    {
        cout << count;
    }
};
int main()
{
    jatin inc;
    ++inc;
    inc.display();
}
