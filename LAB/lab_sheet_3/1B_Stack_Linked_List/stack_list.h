#ifndef stack_h
#define stack_h

#include<iostream>
#include"node_h.h"
using namespace std;
template < class T >


class stack_list
{
    public:
           stack_list(){ head = 0;}

           void push ( T a)
           {
                node<T>* p = head;
                node<T>* newnode = new node<T>;
                newnode->data = a;
                  
                if ( head == 0)
                {
                     newnode->next = head;
                     head = newnode;
                }
                  
                else
                {
                    while( p->next != 0 )
                    p = p->next;
                    newnode->next = p->next;
                    p->next = newnode;
                }
           }


           bool isEmpty()
           {
                if ( head == 0 )
                return true;
                return false;
           }

           T pop()
           {
                  if ( head == 0)
                  return 0;
                  
                  else
                  {
                      node<T>* p = head;
                      node<T>*q = p;
                      
                      while( p->next != 0 )
                      {
                             q = p;
                             p = p->next;
                      }

                      q->next = p->next;
                      T result = p->data;
                      delete p;
                      return result;
                   }
             }

    private:
           node<T> * head ;
};

#endif
