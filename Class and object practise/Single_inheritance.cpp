#include <iostream>
using namespace std;
class var_a
{
protected:
    int a;

public:
    int var_agetdata()
    {
        cout << "Enter a=>";
        cin >> a;
    }
    int var_aprintdata()
    {
        cout << a<<endl;
    }
};

class var_b : public var_a
{
private:
    int b;

public:
    int var_bgetdata()
    {
        cout << "Enter b=>";
        cin >> b;
    }
    int var_bprintdata()
    {
        cout << b<<endl;
    }
    int mul()
    {
        cout << "Multiplication =" << a * b;
    }
};

int main()
{
    var_b v1;
    v1.var_agetdata();
    v1.var_aprintdata();
    v1.var_bgetdata();
    v1.var_bprintdata();
    v1.mul();
}