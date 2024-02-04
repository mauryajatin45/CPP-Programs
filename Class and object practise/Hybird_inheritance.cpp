#include <iostream>
using namespace std;

class student
{
private:
    int rno;
    string name;

public:
    void setstudent()
    {
        cout << "Enter Student ID:--" << endl;
        cin >> rno;
        cout << "Enter Student NAME:--" << endl;
        cin >> name;
    }
    void getstudent()
    {
        cout << "Student id is " << rno << endl;
        cout << "Student name is " << name << endl;
    }
};

class marks
{
protected:
    int e, h;

public:
    void setmarks()
    {
        cout << "Enter Marks of ENGLISH:--" << endl;
        cin >> e;
        cout << "Enter Marks of HINDI:--" << endl;
        cin >> h;
    }
    void getmarks()
    {
        cout << "English = " << e << endl;
        cout << "Hindi = " << h << endl;
    }
};

class sports
{

protected:
    int cricket;

public:
    void setsports()
    {
        cout << "Enter the marks of Cricket" << endl;
        cin >> cricket;
    }

    void getsports()
    {
        cout << "The marks of Cricket is" << cricket << endl;
    }
};

class result : public marks, public sports, public student
{
public:
    void getresult()
    {
        cout << "Total marks =" << e + h + cricket << endl;
    }
};
int main()
{
    result r1;
    r1.setstudent();
    r1.setmarks();
    r1.setsports();
    r1.getstudent();
    r1.getmarks();
    r1.getsports();
    r1.getresult();
}