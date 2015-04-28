#include<iostream>
using namespace std;
int main()
{
    int a[20], i = 0, n ;

    while ( i < 20)
    {
        cin >> n;

        if ( n >= 10 && n <= 100 )
        {
            a[i] = n;
            int j= i +1, count = 0;
            for( int k = 0 ; k < j ; k++)
            {
                if( n == a[k])
                count++;
            }
            if(count  == 1)
            cout << n << endl;
            i++;
        }
    }
    return 0;
}
