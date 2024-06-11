#include<iostream>
using namespace std;

class jatin{
public:
static int total;
 jatin(){
total+=1;
}

};
int jatin::total=0;

int main(){
jatin j;
cout<<j.total;
}