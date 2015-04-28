#include <iostream>
#include "queue_list.h"
#include "node.h"
using namespace std;

int main()
{
    queue_list <int> one;

    one.enqueue( 1786875 );
    one.enqueue( 234234 );
    one.enqueue( 2826 );
    
    if( one.isEmpty() == true)
    cout << "Stack is empty 1" << endl;
    
    
    int pop ;
    pop = one.dequeue();
  //  pop = one.dequeue();
//    pop = one.dequeue();
    
   

    if( pop == 0)
    cout << "Queue underflow" << endl;
    
    else
    cout << pop << endl;
       
    system("PAUSE");
    return 0;
}
