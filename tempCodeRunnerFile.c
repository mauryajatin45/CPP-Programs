#include<iostream>
using namespace std;

class jatin{
    public:
    int a;
    
    int jsetdata(){
        cout<<"Enter the value of a: "<<endl;
        cin>>a;
    }

    int jgetdata(){
        cout<<"The value of a is: "<<a<<endl;
    }
    friend void max(jatin j, shraddha s);
};

class shraddha{
    int shraddhasetdata(){
        cout<<"Enter the value of b:"<<endl;
        cin>>b;
    }

    int shraddhagetdata(){
        cout<<"The value of b is: "<<b<<endl;
    }

    friend void max(jatin j, shraddha s);
};

void max(jatin j, shraddha s){
    if(j.a>s.d){
        cout<<"The value of a is greater than b"<<endl;
    }
    else{
        cout<<"The value of b is greater than a"<<endl;
    }
}

int main(){
    jatin j;
    shraddha s;
    j.jsetdata();
    j.jgetdata();
    s.shraddhasetdata();
    s.shraddhagetdata();
    voidmax();

}