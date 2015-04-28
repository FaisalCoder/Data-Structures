#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    int n,x, dummy ;
    clock_t t1,t2;
    
    cout << "ENTER ORDER OF MATRIX " << endl;
    cin >> n;
    int matrix[n][n-1],count = 0;
    cout << "ENTER GIVEN NUMBERS "  << endl;

    for(int i = 0; i < n ; i++)
    {
        for(int j = 0;j < n-1  ; j++)
        cin >> matrix[i][j];
    }

    cout << "ENTER NUMBER TO BE FOUND " << endl;
    cin >> x;
    
    t1 = clock();
    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < n-1  ; j++)
        cout <<  matrix[i][j] << "   ";
        cout << endl;
    }

    for(int i = 0; i < n ; i++)
    {
        for(int j = 0;j < n-1  ; j++)
        {
            count++;
            if( x == matrix[i][j])
            { dummy = 2; 
            break;}


        }
        if(dummy == 2)
        break;
    }

   
    if (count == (n)*(n -1) && matrix[n-1][n-2] != x)
    cout << x << " not found in the matrix " << count << " comparisons made in all " << endl;

    else
    cout << x << " is one of the numbers of the matrix " << count << " comparisons made in all " << endl;

    t2 = clock();
    cout << "time taken for execution of program " << (double(t2-t1)/CLOCKS_PER_SEC ) << endl;

    system("pause");
    return 0;
}
