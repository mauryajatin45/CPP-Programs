#include <iostream>
using namespace std;

class student
{
protected:
    int id;
    string name;

public:
    void details()
    {
        cout << "Enter ID:-";
        cin >> id;
        cout << "Enter name:-";
        cin >> name;
    }
};

class marks
{
public:
    int Hindi;
    int English;

    void getmarksdetails()
    {
        cout << "Hindi = ";
        cin >> Hindi;
        cout << "English = ";
        cin >> English;
        return;
    }
};

class printdata : public student, public marks
{
public:
    void result()
    {   cout<<"The Result of "<<name<<" whose roll no. is "<<id<<" is as follow:-"<<endl;
        cout << "Marks in hindi = " << Hindi<<endl;
        cout << "Marks in English = " << English<<endl;
    }
};
int main()
{
    printdata pd;
    pd.details();
    pd.getmarksdetails();
    pd.result();
}