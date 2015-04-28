#include<iostream>
using namespace std;
int main()
{
    int a[]={12,92,57,48,86,33,37,25};
    int i,k,y;
    for(k=0; k < 8 ; k++)
    {
        y= a[k];
        for(i= k-1; i >=0 && y < a[i];i--)
        {
            a[i+1]= a[i];
            for(int r= 0;r < 8;r++)
            cout << a[r] << " \t";
            cout << endl;
        }

        a[i+1]= y;
        for(int r= 0;r < 8;r++)
            cout << a[r] << "\t";
            cout << endl;
        }
        system("pause");
        return 0 ;
}
