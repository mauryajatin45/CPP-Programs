#include <iostream>
using namespace std;
class student
{
private:
    int rno;
    string name;
    static int y;

public:
    void setstudent()
    {
        cout << "enter the roll no.-->";
        cin >> rno;
        cout << "enter the name-->";
        cin >> name;
        y++;
    }
    void getstudnet()
    {
        cout << "Roll no = " << rno;
        cout << "Name = " << name;
        cout << "Y=" << y;
    }
};
int student::y;
int main()
{
    student s1;
    s1.setstudent();
    s1.getstudnet();

    student s2;
    s2.setstudent();
    s2.getstudnet();

    student s3;
    s3.setstudent();
    s3.getstudnet();
}