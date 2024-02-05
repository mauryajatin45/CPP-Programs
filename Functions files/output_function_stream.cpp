#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream Myfile("test.txt");
    // Ofstream is used to write something in the file
    // ifstream is used to read something in the file
    // fstream is used to read  and write something in the file
    Myfile << "Hi!!!, my name is Jatin Maurya";
    Myfile.close();
}