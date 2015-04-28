#include<iostream>
using namespace std;
   
const int N = 5;

template < class T >

class stack
{
    public:
        stack(){ f = -1; }
        
        void push ( T a )
        {
             if ( ( f + 2 ) > N )
             {
                  cout << "Stack Overflow" << endl;
             }
    
             else
             {
                 f++;
                 A[f] = a;
             }        
        }
        
        T pop()
        {
               if(f > 0 || f == 0)
               {
                    f--;
                    return A[f + 1];
               }
               
               //cout << "Stack Underflow " << endl;
               return 0;
        }
 
        bool isEmpty()
        {
             if ( f < 0 )
             return true;
             return false;
        } 
        
    private:
        int f ;
        T A[N];
};
   
