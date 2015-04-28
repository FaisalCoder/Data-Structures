#include<iostream>
using namespace std;
template <class T>
# define N 4

class queue_array
{
      public:
             queue_array(){ f = 0 ; r = 0;}
            
             void enqueue( T a)
             {
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
             }
             
             T dequeue()
             {
                        if( f == r)
                        return 0;
                        
                        else
                        {
                            T temp;
                            
                            if( f == N)
                            {
                                f = 0;
                                temp = A[f];
                                A[f] = 0;
                                return temp;
                            }
                            
                            else
                            {
                                f++;
                                temp = A[f];
                                A[f] = 0;
                                return temp;
                            } 
                        }
             }
             
             bool isEmpty()
             {
                  if( f == r )
                  return true;
                  return false;
             }
                        
                  
      private:
              T A[N+1];
              int f,r;
};
