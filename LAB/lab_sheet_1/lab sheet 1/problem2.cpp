#include <iostream>
#include <string>
#include<cmath>
#include<time.h>
using namespace std;

void convert_int_to_string( int d)
{
    int n = d;
    int  count = 0 ;
    while( n > 0)
    {
           n = n/10;
           count++;
    }

    string s;

    for(int i = (count - 1); i >= 0 ; i--)
    {
           s[i] = (d%10 + '0');
           d = d/10;
    }

    for(int i = 0 ; i < count  ; i++)
    {cout << s[i] ; }

}

int main()
{
    string s1,s2;
    int x=0, y = 0, z, d;
    clock_t t1,t2,t3,t4,t5;

    cout << "Enter two integers" << endl;
    cin >> s1 >> s2;

    for(int i =0 ; i < s1.length(); i++)
    {
        d = s1[i] - '0';
        x = 10*x + d;
    }

    for(int i =0 ; i < s2.length(); i++)
    {
        d = s2[i] - '0';
        y = 10*y + d;
    }

    if( x > y ) cout << x << " > " << y << endl;
    else if( x < y ) cout << x << " < " << y << endl;
    else cout <<  x << " = " << y << endl;

    t1 = clock();
    cout << x << " - " << y << " = " << x-y << endl;
    t2 = clock();
    cout << " Time taken in execution " << ((float)t2-(float)t1) << endl;

    t3 = clock();
    cout << x << "/" << y << " = " << x/y << endl;
    cout << " Time taken in execution " << t3-t2 << endl;

    t4 = clock() ;
    cout << x << "*" << y << " = " << x*y << endl;
    cout << "Time taken in execuction " << t4-t1 << endl;

    t5 = clock() ;
    //cout << x << "^" << y << " = " << pow(x,y) << endl;
    cout << "Time taken in execuction " << t5-t4 << endl;

  //DECLARATION OF RESULT AS STRING
   convert_int_to_string(x-y);
   cout << endl;
   convert_int_to_string(x/y);
   cout << endl;
   convert_int_to_string(x*y);
   cout << endl;



    long long int fact = 1;

    if(x == 0 || x == 1)
    cout << x << "! = " << fact << endl;

    else
    {
        for ( int i =1 ; i <= x ; i++)
    {
        fact*=i;
    }

    cout << x << "! = " << fact << endl;
    }

    system("pause");
    return 0;




}
