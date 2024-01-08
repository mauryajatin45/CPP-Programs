#include <iostream>
using namespace std;
class student
{
public:
    string name;
    string surname;
    string course;
    double mo_no;
    int fees;
};
int main()
{
    student a;
    a.name = "Ashish";
    a.surname = "Tilwani";
    a.course = "BCA";
    a.mo_no = 7069013316;
    a.mo_no = 25, 000;
    cout << "The name of student 1 is " << a.name << endl;
}