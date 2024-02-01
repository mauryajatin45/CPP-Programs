#include<iostream>
using namespace std;

 int add( int a, int b, int c=0, int d=0, int e=0){

    cout<<"Answer is "<<a+b+c+d+e<<endl;
 }
 int main(){
  add(1,2,3,4,5);
  add(1,2,3,4);
  add(1,2,3);
  add(1,2);
 }