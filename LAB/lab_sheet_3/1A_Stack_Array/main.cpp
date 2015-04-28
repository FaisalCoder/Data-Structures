#include<iostream>
#include<string>
#include"stack_array.h"
using namespace std;

int main()
{
    stack <int> one;
    one.push( 123 );
    one.push( 83 );
    
    int type;
    cout << "Select type of stack you want to implement" << endl;
    cout << "Press 1 - INTEGER " << endl; 
    cout << "Press 2 - FLOAT " << endl; 
    cout << "Press 3 - CHAR" << endl; 
    cin >> type;     

   // switch( type )
   // { case 1:
    
    int temp;
    temp = one.pop();
    temp = one.pop();
    temp = one.pop();
            
               
    if( temp == 0)
    cout << "Stack underflow" << endl;
    
    else
    cout << temp << endl;
    
    
    system("pause");
    return 0;
}    

