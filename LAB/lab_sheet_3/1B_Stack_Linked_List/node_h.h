#ifndef node_h
#define node_h

#include<iostream>
using namespace std;
template<class T>

class node
{
      public:
             T data;
             node<T> * next;
};
#endif
