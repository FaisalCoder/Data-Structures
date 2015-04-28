#include<iostream>
#include "node.h"
using namespace std;

template <class T>
      
class queue_list
{
      private:
              node<T>* head;
      
      public:
             queue_list(){ head = 0;}
             
             void enqueue( T a)
             {
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
                  
                  
             }
             
             T dequeue()
             {
                        if( head == 0)
                        return 0;
                        
                        else
                        {
                            node<T>* p = head;
                            head = p->next;
                            T temp = p->data;
                            delete p;
                            return temp;
                        }
             }
             
             bool isEmpty()
             {
                  if( head == NULL )
                  return true;
                  return false;
             }
             
      
};  
