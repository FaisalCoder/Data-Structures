#include<iostream>
using namespace std;
template <class T>
#define N 5

class queue_array
{
      public:
             queue_array(){ f = 0 ; r = 0;}
            
             void enqueue( )
             {
                 T a;
            cout << "Enter the element you want to push in the stack" << endl;
            cin >> a;
                  if( r == N )
                  {
                      if( f == 0)
                      cout << "Queue overflow" << endl;
                  
                      else
                     {
                          r = 0 ;
                          A[r] = a;
                     }
                  }
                  
                  else
                  {
                      if(( r + 1) == f)
                      cout << "Queue overflow" << endl;
                      
                      else
                      {
                          r++;
                          A[r] = a;
                      }
                  }
                  cout << endl;
             }
             
             void dequeue()
             {
                        if( f == r)
                        cout << "QUEUE UNDERFLOW" << endl;
                        
                        else
                        {
                            T temp;
                            
                            if( f == N)
                            {
                                f = 0;
                                temp = A[f];
                                A[f] = 0;
                                cout << temp << endl;
                            }
                            
                            else
                            {
                                f++;
                                temp = A[f];
                                A[f] = 0;
                                cout <<  temp << endl;
                            } 
                        }
                        cout << endl;
             }
             
             void isEmpty()
             {
                  if( f == r )
                  cout << "QUEUE IS EMPTY " << endl;
                  else
                  cout << "QUEUE IS NOT EMPTY " << endl;
                  cout << endl;
             }
                        
                  
      private:
              T A[N+1];
              int f,r;
};
