#include <iostream>
#include "queue_array.h"
using namespace std;

int main()
{
    queue_array <int> one;
    one.enqueue(23);

        
    int temp = one.dequeue();
    

    if( temp == 0)
    cout << "Queue underflow" << endl;
    
    else
    cout << temp << endl;
    
          
    system("PAUSE");
    return 0;
}
