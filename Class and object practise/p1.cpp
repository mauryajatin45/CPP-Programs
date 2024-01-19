#include<iostream>
using namespace std;
class student{
    public:
    int id;
    string name;
    double mo;
};

int main(){
 student s1;
 s1.id=01;
 s1.name="Jatin";
 s1.mo=7069013316;
cout<<"id = "<<s1.id<<"name = "<<s1.name<<"Mobile number = "<<s1.mo;
}