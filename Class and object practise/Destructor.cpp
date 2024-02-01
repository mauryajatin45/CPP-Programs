#include <iostream>
using namespace std;
class emp
{
private:
    int emp_id, salary;

public:
    emp()
    {
        emp_id = 1;
        salary = 15000;
    }
    void printdata()
    {
        cout << "Employees ID:-" << emp_id
             << "Salary:-" << salary << endl;
    }
    ~emp()
    {
        cout << "The Deconstructor has finished the Work!!" << endl;
    }
};

int main()
{
    emp e1, e2, e3;
    e1.printdata();
    e2.printdata();
    e3.printdata();
}