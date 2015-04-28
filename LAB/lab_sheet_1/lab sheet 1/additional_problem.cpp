//Question: Two arrays of different lengths given we have to merge them, remove duplicates and sort the combined array.

#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;

    cout << "Enter the size of array 1 : ";
    cin >> n1;
    cout << "Enter the size of array 2 : ";
    cin >> n2;
    int a[n1],b[n2];

    //Entering the elements of the arrays

    cout << "Enter " << n1 << " elements of array 1 :" << endl;
    for(int i=0; i < n1; i++)
    cin >> a[i];

    cout << "Enter " << n2 << " elements of array 2 :" << endl;
    for(int i=0; i < n2; i++)
    cin >> b[i];

    int count = 0,k=0;
    for(int i=0; i < n1; i++ )
    {
        for(int j=0 ; j < n2; j++)
        {
            if( a[i] == b[j])
            {count++;
            break;}
        }
    }

    n3 = ( n1 + n2 - count);
    cout << "Size of array 3 " << n3 << endl;
    int c[n3];
    for(int i=0; i < n1; i++ )
    {
        int count2=0;
        for(int j=0 ; j < n2; j++)
        {
            if( a[i] != b[j])
            {
                count2++;
            }
        }

            if( count2 == n2)
            {
                c[k] = a[i];
                k++;
            }
         }

    for( int i=0 ; i<n2; i++)
    {
        c[k ] = b[i];
        k++;
    }


    for( int i=0; i<n3 ; i++)
    cout << c[i] << "    ";

    return 0 ;
}
