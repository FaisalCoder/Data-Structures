#include<iostream>
#include<string>
#include<sstream>

using namespace std;
int main()
{
    int test,i=0;
    //cin >> test;
    string a[4];

    while( i < 4 )
    {
        getline(cin,a[i]);
        i++;
    }


    for( int j=0; j<4; j++)
    {
        cout << a[j][0] << endl;
    }

    return 0;
}
