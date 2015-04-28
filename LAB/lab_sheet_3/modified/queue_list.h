#include<iostream>
#include "node_h.h"
using namespace std;

template <class T>
      
class queue_list
{
      private:
              node<T>* head;
      
      public:
             queue_list(){ head = 0;}
             
             void enqueue()
             {
                 T a;
                 cout << "Enter the element you want to push in the stack" << endl;
                 cin >> a;
            
                  node<T>* p = head;
                  
                  node<T>* newnode = new node<T>;
                  newnode->data = a;
                  
                  if( head == 0)
                 {
                       newnode->next = head;
                       head = newnode;
                 }
                 
                  else
                  {
                      while( p->next != 0)
                      p = p->next;
                  
                      newnode->next = p->next;
                      p->next = newnode;
                  }
                  
                 cout << endl; 
             }
             
             void dequeue()
             {
                        if( head == 0)
                        cout << "QUEUE UNDERFLOW" << endl;
                        
                        else
                        {
                            node<T>* p = head;
                            head = p->next;
                            T temp = p->data;
                            delete p;
                            cout << temp << endl;
                        }
                        cout << endl;
             }
             
             void isEmpty()
             {
                  if( head == NULL )
                  cout << "QUEUE IS EMPTY " << endl;
                  else
                  cout << "QUEUE IS NOT EMPTY " << endl;
                  cout << endl;
             }
             
      
};  
