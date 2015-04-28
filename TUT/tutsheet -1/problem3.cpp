#include<iostream>
#include<algorithm>
using namespace std;



int partition(int a[],int p ,int r)
{
    int k = a[r];
    int i=p-1;

    for( int j=p; j<r;j++)
    {
        if ( a[j] < k)
        {
            i++;
            //exchange
            int temp = a[j];
            a[j] = a[i];
            a[i] = temp;

        }
    }
    int temp = a[r];
            a[r] = a[i+1];
            a[i+1] = temp;

    return i+1;
}

void qs(int a[],int p, int r)
{
    if ( p < r )
    {int q = partition(a,p,r);
    qs(a,p,q-1);
    qs(a,q+1,r);
    }

}




int main()
{
    int a[]={-12,23,19,42,66,-12,-2,-92,1,21,-22,47,41,-88};
    int n = sizeof(a)/sizeof(int);


    int c,k,j;

    qs(a,0,n-1);
    for( int i=0;i<n;i++)
    cout << a[i] << " ";
cout << endl;
    for( int i=n-1;i>2; i--)
    {
        c = a[i];
        k = i-1;j=0;

        while( k > 0 && j < k)
        {
            if ( (a[k]+a[j]) > -c)
            k--;

            else if ((a[k]+a[j]) < -c)
            j++;

            else
            {
                cout << c << " " << a[k] << " " << a[j] << endl;
                break;
            }
        }
    }

    return 0;

}
