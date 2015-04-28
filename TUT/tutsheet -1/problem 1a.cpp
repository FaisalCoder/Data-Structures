#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream in;
    in.open("testing");
    string s = "Hello people!!";
    char a[10]={"hello"};
    in << a[0];
    in.close();

    return 0;
}
