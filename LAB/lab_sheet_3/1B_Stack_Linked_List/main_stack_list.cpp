#include<iostream>
#include "stack_list.h"
using namespace std;

int main()
{
    stack_list <int> one;
    one.push( 786);
    one.push( 1121218);
    one.push( 470);
    
    int temp;
    temp = one.pop();
    
    if( temp == 0)
    cout << "Stack underflow" << endl;
    
    else
    cout << temp << endl;
    
    system("pause");
    return 0;
}
    
