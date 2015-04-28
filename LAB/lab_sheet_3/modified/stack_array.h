#include<iostream>
using namespace std;
   
#define N 5

template < class T >

class stack_array
{
    public:
        stack_array(){ f = -1; }
        
        void push (  )
        {
            T a;
            cout << "Enter the element you want to push in the stack" << endl;
            cin >> a;
            
            
             if ( ( f + 2 ) > N )
             {
                  cout << "Stack Overflow" << endl;
             }
    
             else
             {
                 f++;
                 A[f] = a;
             }   
             cout << endl;     
        }
        
        void pop()
        {
               if(f > 0 || f == 0)
               {
                    f--;
                    cout <<  A[f + 1] << endl;
               }
               
               else
               cout << "STACK UNDERFLOW " << endl;
               cout << endl;
               
        }
 
        void isEmpty()
        {
             if ( f < 0 )
             cout << "STACK IS EMPTY " << endl;
             else
             cout << "STACK IS NOT EMPTY " << endl;
             cout << endl;
        } 
        
    private:
        int f ;
        T A[N];
};
   
