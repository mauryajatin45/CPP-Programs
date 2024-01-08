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

    void details()
    {
        cout << "Student details:-" << endl
             << "The Full name of student is" << this->name << " " << this->surname << endl
             << "Course is " << this->course << endl
             << "Mobile number is " << this->mo_no << endl
             << "Fees is " << this->fees << endl;
    };
};
int main()
{
    student a;
    a.name = "Ashish";
    a.surname = "Tilwani";
    a.course = "BCA";
    a.mo_no = 7069013316;
    a.fees = 25000;
    a.details();
    
    return 0;
}