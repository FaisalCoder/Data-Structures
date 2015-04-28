#include<iostream>
#include<string>
#include "stack_list.h"
#include "queue_array.h"
#include "queue_list.h"
#include "node_h.h"
#include "stack_array.h" // add all header files
using namespace std;

int main()
{
    
    int choice1 , choice2, choice3;
    // main choice
    cout << "Select the data structure you want to work on: " << endl;
    cout << "Press 1 - STACK implementation with ARRAY " << endl;
    cout << "Press 2 - STACK implementation with LINKED LIST " << endl;
    cout << "Press 3 - QUEUE implementation with ARRAY " << endl;
    cout << "Press 4 - QUEUE implementation with LINKED LIST " << endl;
    cout << "Press any other key to EXIT " << endl;
    cout << "YOUR CHOICE : ";
    cin >> choice1;
    
    if ( choice1 == 1)           // STACK ARRAY
    {
             cout << "Select the DATA TYPE OF STACK you want to implement" << endl;
                     cout << "Press 1 - INT type" << endl;
                     cout << "Press 2 - FLOAT type" << endl;
                     cout << "Press 3 - CHAR type" << endl;
                     cout << "Press any other key to exit" << endl;
                     cout << "YOUR CHOICE : ";
                     cin >> choice2;
         
         if( choice2 == 1 )
               { // main
                   stack_array<int> one;
                   do
                   {
                   cout << "Select the FUNCTION you want to implement" << endl;
                   cout << "Press 1 - PUSH element" << endl;
                   cout << "Press 2 - POP element" << endl;
                   cout << "Press 3 - TO CHECK IF STACK IS EMPTY " << endl;
                   cout << "Press any other key to exit" << endl;
                   cout << "YOUR CHOICE : ";
                   cin >> choice3;
                   
                   if ( choice3 == 1)
                   one.push();     
                   
                   else if( choice3 == 2)
                   one.pop();
                   
                   else if (choice3 == 3)
                   one.isEmpty();
                   
                   else 
                   return 0;
                   
                   }
                   
                   while ( choice3 == 1 || choice3 == 2 || choice3 == 3);
               }
          
         
         else if ( choice2 == 2 )
         {
              stack_array<float> one;
              do
                   {
                   cout << "Select the FUNCTION you want to implement" << endl;
                   cout << "Press 1 - PUSH element" << endl;
                   cout << "Press 2 - POP element" << endl;
                   cout << "Press 3 - TO CHECK IF STACK IS EMPTY " << endl;
                   cout << "Press any other key to exit" << endl;
                   cout << "YOUR CHOICE : ";
                   cin >> choice3;
                   
                   if ( choice3 == 1)
                   one.push( );     // modify pop function cout take value from user
                   
                   else if( choice3 == 2)
                   one.pop();
                   
                   else if (choice3 == 3)
                   one.isEmpty();
                   
                   else 
                   return 0;
                   
                   }
                   
                   while ( choice3 == 1 || choice3 == 2 || choice3 == 3);
               }
         
         else if ( choice2 == 3 )
         {
              stack_array<char> one;
              do
                   {
                   cout << "Select the FUNCTION you want to implement" << endl;
                   cout << "Press 1 - PUSH element" << endl;
                   cout << "Press 2 - POP element" << endl;
                   cout << "Press 3 - TO CHECK IF STACK IS EMPTY " << endl;
                   cout << "Press any other key to exit" << endl;
                   cout << "YOUR CHOICE : ";
                   cin >> choice3;
                   
                   if ( choice3 == 1)
                   one.push();     // modify pop function cout take value from user
                   
                   else if( choice3 == 2)
                   one.pop();
                   
                   else if (choice3 == 3)
                   one.isEmpty();
                   
                   else 
                   return 0;
                   
                   }
                   
                   while ( choice3 == 1 || choice3 == 2 || choice3 == 3);
               }
       else 
       return 0;
    
    }
    
    else if ( choice1 == 2)        // STACK LIST
    {
         
             cout << "Select the DATA TYPE OF STACK you want to implement" << endl;
                     cout << "Press 1 - INT type" << endl;
                     cout << "Press 2 - FLOAT type" << endl;
                     cout << "Press 3 - CHAR type" << endl;
                     cout << "Press any other key to exit" << endl;
                     cout << "YOUR CHOICE : ";
                     cin >> choice2;
         
         if( choice2 == 1 )
               { // main
                   stack_list<int> one;
                   do
                   {
                   cout << "Select the FUNCTION you want to implement" << endl;
                   cout << "Press 1 - PUSH element" << endl;
                   cout << "Press 2 - POP element" << endl;
                   cout << "Press 3 - TO CHECK IF STACK IS EMPTY " << endl;
                   cout << "Press any other key to exit" << endl;
                   cout << "YOUR CHOICE : ";
                   cin >> choice3;
                   
                   if ( choice3 == 1)
                   one.push();     // modify pop function cout take value from user
                   
                   else if( choice3 == 2)
                   one.pop();
                   
                   else if (choice3 == 3)
                   one.isEmpty();
                   
                   else 
                   return 0;
                   
                   }
                   
                   while ( choice3 == 1 || choice3 == 2 || choice3 == 3);
               }
          
         
         else if ( choice2 == 2 )
         {
              stack_list<float> one;
              do
                   {
                   cout << "Select the FUNCTION you want to implement" << endl;
                   cout << "Press 1 - PUSH element" << endl;
                   cout << "Press 2 - POP element" << endl;
                   cout << "Press 3 - TO CHECK IF STACK IS EMPTY " << endl;
                   cout << "Press any other key to exit" << endl;
                   cout << "YOUR CHOICE : ";
                   cin >> choice3;
                   
                   if ( choice3 == 1)
                   one.push();     // modify pop function cout take value from user
                   
                   else if( choice3 == 2)
                   one.pop();
                   
                   else if (choice3 == 3)
                   one.isEmpty();
                   
                   else 
                   return 0;
                   
                   }
                   
                   while ( choice3 == 1 || choice3 == 2 || choice3 == 3);
               }
         
         else if ( choice2 == 3 )
         {
              stack_list<char> one;
              do
                   {
                   cout << "Select the FUNCTION you want to implement" << endl;
                   cout << "Press 1 - PUSH element" << endl;
                   cout << "Press 2 - POP element" << endl;
                   cout << "Press 3 - TO CHECK IF STACK IS EMPTY " << endl;
                   cout << "Press any other key to exit" << endl;
                   cout << "YOUR CHOICE : ";
                   cin >> choice3;
                   
                   if ( choice3 == 1)
                   one.push();     // modify pop function cout take value from user
                   
                   else if( choice3 == 2)
                   one.pop();
                   
                   else if (choice3 == 3)
                   one.isEmpty();
                   
                   else 
                   return 0;
                   
                   }
                   
                   while ( choice3 == 1 || choice3 == 2 || choice3 == 3);
               }
       else 
       return 0;
    
         
         
    }
    
    else if ( choice1 == 3)           // QUEUE ARRAY
    {
         
             cout << "Select the DATA TYPE OF QUEUE you want to implement" << endl;
                     cout << "Press 1 - INT type" << endl;
                     cout << "Press 2 - FLOAT type" << endl;
                     cout << "Press 3 - CHAR type" << endl;
                     cout << "Press any other key to exit" << endl;
                     cout << "YOUR CHOICE : ";
                     cin >> choice2;
         
         if( choice2 == 1 )
               { // main
                   queue_array<int> one;
                   do
                   {
                   cout << "Select the FUNCTION you want to implement" << endl;
                   cout << "Press 1 - PUSH element" << endl;
                   cout << "Press 2 - POP element" << endl;
                   cout << "Press 3 - TO CHECK IF QUEUE IS EMPTY " << endl;
                   cout << "Press any other key to exit" << endl;
                   cout << "YOUR CHOICE : ";
                   cin >> choice3;
                   
                   if ( choice3 == 1)
                   one.enqueue();     // modify pop function cout take value from user
                   
                   else if( choice3 == 2)
                   one.dequeue();
                   
                   else if (choice3 == 3)
                   one.isEmpty();
                   
                   else 
                   return 0;
                   
                   }
                   
                   while ( choice3 == 1 || choice3 == 2 || choice3 == 3);
               }
          
         
         else if ( choice2 == 2 )
         {
              queue_array<float> one;
              do
                   {
                   cout << "Select the FUNCTION you want to implement" << endl;
                   cout << "Press 1 - PUSH element" << endl;
                   cout << "Press 2 - POP element" << endl;
                   cout << "Press 3 - TO CHECK IF QUEUE IS EMPTY " << endl;
                   cout << "Press any other key to exit" << endl;
                   cout << "YOUR CHOICE : ";
                   cin >> choice3;
                   
                   if ( choice3 == 1)
                   one.enqueue();     // modify pop function cout take value from user
                   
                   else if( choice3 == 2)
                   one.dequeue();
                   
                   else if (choice3 == 3)
                   one.isEmpty();
                   
                   else 
                   return 0;
                   
                   }
                   
                   while ( choice3 == 1 || choice3 == 2 || choice3 == 3);
               }
         
         else if ( choice2 == 3 )
         {
              queue_array<char> one;
              do
                   {
                   cout << "Select the FUNCTION you want to implement" << endl;
                   cout << "Press 1 - PUSH element" << endl;
                   cout << "Press 2 - POP element" << endl;
                   cout << "Press 3 - TO CHECK IF QUEUE IS EMPTY " << endl;
                   cout << "Press any other key to exit" << endl;
                   cout << "YOUR CHOICE : ";
                   cin >> choice3;
                   
                   if ( choice3 == 1)
                   one.enqueue();     // modify pop function cout take value from user
                   
                   else if( choice3 == 2)
                   one.dequeue();
                   
                   else if (choice3 == 3)
                   one.isEmpty();
                   
                   else 
                   return 0;
                   
                   }
                   
                   while ( choice3 == 1 || choice3 == 2 || choice3 == 3);
               }
       else 
       return 0;
     }
    
    else if ( choice1 == 4)           // QUEUE LIST
    {
         
             cout << "Select the DATA TYPE OF QUEUE you want to implement" << endl;
                     cout << "Press 1 - INT type" << endl;
                     cout << "Press 2 - FLOAT type" << endl;
                     cout << "Press 3 - CHAR type" << endl;
                     cout << "Press any other key to exit" << endl;
                     cout << "YOUR CHOICE : ";
                     cin >> choice2;
         
         if( choice2 == 1 )
               { // main
                   queue_list<int> one;
                   do
                   {
                   cout << "Select the FUNCTION you want to implement" << endl;
                   cout << "Press 1 - PUSH element" << endl;
                   cout << "Press 2 - POP element" << endl;
                   cout << "Press 3 - TO CHECK IF QUEUE IS EMPTY " << endl;
                   cout << "Press any other key to exit" << endl;
                   cout << "YOUR CHOICE : ";
                   cin >> choice3;
                   
                   if ( choice3 == 1)
                   one.enqueue();     // modify pop function cout take value from user
                   
                   else if( choice3 == 2)
                   one.dequeue();
                   
                   else if (choice3 == 3)
                   one.isEmpty();
                   
                   else 
                   return 0;
                   
                   }
                   
                   while ( choice3 == 1 || choice3 == 2 || choice3 == 3);
               }
          
         
         else if ( choice2 == 2 )
         {
              queue_list<float> one;
              do
                   {
                   cout << "Select the FUNCTION you want to implement" << endl;
                   cout << "Press 1 - PUSH element" << endl;
                   cout << "Press 2 - POP element" << endl;
                   cout << "Press 3 - TO CHECK IF QUEUE IS EMPTY " << endl;
                   cout << "Press any other key to exit" << endl;
                   cout << "YOUR CHOICE : ";
                   cin >> choice3;
                   
                   if ( choice3 == 1)
                   one.enqueue();     // modify pop function cout take value from user
                   
                   else if( choice3 == 2)
                   one.dequeue();
                   
                   else if (choice3 == 3)
                   one.isEmpty();
                   
                   else 
                   return 0;
                   
                   }
                   
                   while ( choice3 == 1 || choice3 == 2 || choice3 == 3);
               }
         
         else if ( choice2 == 3 )
         {
              queue_list<char> one;
              do
                   {
                   cout << "Select the FUNCTION you want to implement" << endl;
                   cout << "Press 1 - PUSH element" << endl;
                   cout << "Press 2 - POP element" << endl;
                   cout << "Press 3 - TO CHECK IF QUEUE IS EMPTY " << endl;
                   cout << "Press any other key to exit" << endl;
                   cout << "YOUR CHOICE : ";
                   cin >> choice3;
                   
                   if ( choice3 == 1)
                   one.enqueue();     // modify pop function cout take value from user
                   
                   else if( choice3 == 2)
                   one.dequeue();
                   
                   else if (choice3 == 3)
                   one.isEmpty();
                   
                   else 
                   return 0;
                   
                   }
                   
                   while ( choice3 == 1 || choice3 == 2 || choice3 == 3);
               }
       else 
       return 0;
    
         
    }
    
    else
   { 
        cout << "THANK YOU " << endl;
        return 0;
   }
    
    
    
  // main above only  
    
 /*   stack <int> one;
    one.push( 123 );
    one.push( 83 );
    
    int type;
    cout << "Select type of stack you want to implement" << endl;
    cout << "Press 1 - INTEGER " << endl; 
    cout << "Press 2 - FLOAT " << endl; 
    cout << "Press 3 - CHAR" << endl; 
    cin >> type;     

   // switch( type )
   // { case 1:
    
    int temp;
    temp = one.pop();
    temp = one.pop();
    temp = one.pop();
            
               
    if( temp == 0)
    cout << "Stack underflow" << endl;
    
    else
    cout << temp << endl;
 */  
    
    system("pause");
    return 0;
}    

