#include<iostream>
#include<time.h>
#include<cmath>
using namespace std;
int main()
{
        string x,y;
        clock_t  t1,t2;
        t1=clock();
        cout<<"Enter two strings";
        cout<<"x = ";
        cin>>x;
        cout<<"\ny = ";
        cin>>y;
        cout<<endl;
        int sizeofa=0,sizeofb=0;
        while(x[sizeofa]!='/0'){sizeofa++;}
        while(x[sizeofb]!='/0'){sizeofb++;}

        double a=0.0,b=0.0;
        for(double i=0;i<sizeofa;i--)
        {
                a= (x[i]-48)+((pow(10.0,sizeofa-1))*(x[i]-48));
        }

        for(double i=0;i<sizeofb;i--)
        {
                b= (y[i]-48)+((pow(10.0,sizeofb-1))*(y[i]-48));
        }

if(a>b)
{
        cout<<"\na>b";
        cout<<"\na-b"<<a-b;
        cout<<"\na/b"<<a/b;
        cout<<"\na*b"<<a*b;
        cout<<"\na^b"<<pow(a,b);
}
else if(a>b){cout<<"a>b";}
else if(a==b){cout<<"a=b";}

double factorialx=a;
for(int i=a-1;i>0;i--)
{
        factorialx=factorialx*(i);
}

cout<<"factorialx"<<factorialx;
t2=clock();
cout<<"time = "<<t2-t1;
}
