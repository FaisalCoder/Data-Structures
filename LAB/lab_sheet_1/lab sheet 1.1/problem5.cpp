#include<iostream>
using namespace std;
int main()
{
    int n,x ;
    cout << "ENTER ORDER OF MATRIX " << endl;
    cin >> n;
    int matrix[n][n-1],count =1;
    cout << "ENTER GIVEN NUMBERS "  << endl;

    for(int i = 0; i < n ; i++)
    {
        for(int j = 0;j < n-1  ; j++)
        cin >> matrix[i][j];
    }

    cout << "ENTER NUMBER TO BE FOUND " << endl;
    cin >> x;

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
            if( x != matrix[i][j])
            count++;

            else
            break;
        }
    }

    if(count != 0)
    cout << x << " is one of the numbers of the matrix " << count << " comparisons made in all " << endl;

    else
    cout << x << " not found in the matrix " << endl;

    return 0;
}
