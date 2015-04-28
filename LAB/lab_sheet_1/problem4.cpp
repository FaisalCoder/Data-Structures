#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    int a[20], i = 0, n ;
    clock_t t1,t2;
    
    t1= clock();
    
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
            cout << "\t" << n << endl;
            i++;
        }
    }
    t2 = clock();
    cout << "Total execution time : " << (t1 - t2) << endl;
    
    system("pause");
    return 0;
}
