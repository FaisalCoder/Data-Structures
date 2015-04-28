// PROBLEM TUTORIAL 2 Q1 ALL PARTS

#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

class SLL
{
    public:
    SLL(){head = 0;}
    
    void insert_beginning();
    void insert_anywhere_after_key();
    void insert_last();
    void addnode( int );
    void display();
    void reverse_pointers();      //PROBLEM 1.1 REVERSE POINTERS OF A LINKED LIST
   // friend void merge_two_into_one( SLL , SLL );
   friend node* union_list( SLL ,SLL );
   friend void intersection_list( SLL ,SLL);
    
    
    private:
    node* head;
};

void SLL::insert_beginning()
{
    int value;
    cout << "Enter an integer value to be inserted at the beginning of the list" << endl;
    cin >> value;
    node* newnode = new node;
    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

void SLL::insert_anywhere_after_key()
{
    int p, value, index = 1;
    cout << "Enter position after which you want to insert the element" << endl;
    cin >> p;
    cout << "Enter value of the element to be inserted " << endl;
    cin >> value;

    node* newnode = new node;
    newnode->data = value;
    node*currnode = head;

    if(p == 0)
    {
        newnode->next = head;
        head = newnode;
    }

    else
    {
        while(index < p && currnode != 0)
        {
            currnode = currnode->next;
            index++;
        }
    }

    newnode->next =currnode->next;
    currnode->next = newnode;
}

void SLL::insert_last()
{
     int value;
     cout << "Enter value to be inserted at last node" <<  endl;
     cin >> value;

     node*newnode = new node;
     newnode->data = value;
     node*currnode = head;

     while( currnode->next != 0)
     {
            currnode = currnode->next;
     }

     newnode->next = currnode->next;
     currnode->next = newnode;
}

void SLL::display()
{
     int index = 1;
     node* currnode = head;

     while( currnode != 0)
     {
            cout << "Value stored in node " << index << " = "
                    << currnode->data  << endl;
            currnode = currnode->next;
            index++;
     }
}

void SLL::reverse_pointers()
{
     node* p = head;
     int count = 0;
     
     while( p != 0 )
     {
            p = p->next;
            count++;
     }
     
     node* array[count] ;
     p = head;
     array[0]= head;
     int i = 1;
     
     while( p != 0 )
     {
            array[i] = p->next;
            p = p->next;
            i++;
     }
     
     node* temp ;
     i = 0;
     p = head->next;
     
     while( p != 0 )
     {
            temp = p->next;
            p->next = array[i];
            p = temp;
            i++;
     }
     
     head->next = 0;             // NULL
     head = array[ count - 1 ];
}

void SLL::addnode( int k)
{
     node* newnode = new node;
     newnode->data = k;
     newnode->next = head;
     head = newnode;
}

/*
void merge_two_into_one( SLL a , SLL b )
{
     node* p1 = a.head;
     node* p2 = b.head;
     int count;
     
     while( p1 != 0)
     {
            count = 0;
            
            while( p2->data < p1->data && p2 != 0)
            {
                   p2 = p2->next;
                   count++;
            }
            
            if( count == 0)
            {
                a.head = p1->next;
                p1->next= b.head;
                b.head = p1;
            }
            
            else if( p2->next == 0)
            {
                 a.head = p1->next;
                 p1->next = p2->next;
                 p2->next = p1;
            }
            
            else
            {
                a.head = p1->next;
                p1->next = p2->next;
                p2->next = p1;
            }
            
            
     } 
     
     
}
*/

node* union_list( SLL a , SLL b )
{
     node*p1 = a.head;
     node*p2 = b.head;
     SLL result;
     
     while( p1 != 0 || p2 != 0)
     {
            if( p1 != 0 && p2 != 0)
            {
                if( p1->data == p2->data)
                result.addnode( p1->data);
                
                else
                {
                    result.addnode( p1->data );
                    result.addnode( p2->data );
                }
                
                p1 = p1->next;
                p2 = p2->next;
            }
            
            else if ( p1 == 0)
            {
                 result.addnode(p2->data);
                 p2 = p2->next;
            }
            
            else if ( p2 == 0)
            {
                 result.addnode(p1->data);
                 p1 = p1->next;
            }
                 
     }
     
     result.display();
     return result.head;

}

void intersection_list( SLL a ,SLL b)
{
      SLL r;
      node* p1 = a.head;
      node* p2 = b.head;
      int count = 0 , process = 0;
      
      while( p1 != 0 )
      {
             p2 = b.head;
             
             while( p2 != 0 && p2->data != p1->data )
             p2 = p2->next;
             
             if (   p2 != 0 && p1 != 0 && p1->data == p2->data)
             {
                  node* newnode = new node;
                  newnode->data = p1->data;
                  newnode->next = r.head;
                  r.head = newnode;
                  process++;
             }
             
             p1 = p1->next;
      }
       
      if(process != 0)
      r.display();
      
}



int main()
{
    SLL one, two;
    one.insert_beginning();
    one.insert_beginning();
    one.insert_beginning();
    //one.insert_beginning();
    one.display();
    
    //Problem 1.1
    one.reverse_pointers();
    cout << endl;
    cout << "Linked list after reversing the pointers : " << endl; 
    one.display();
    
    cout << endl;
    two.insert_beginning();
    two.insert_beginning();
    two.insert_beginning();
    two.insert_beginning();
    two.display();
    
   /*
    Problem 1.2 incomplete
    merge_two_into_one(  one ,  two );
    cout << endl;
    cout << "Linked list after merging : " << endl;
    two.display();
    */
    
    //Problem 1.3
    cout << endl;
    cout << "Linked list containing set union of two list :" << endl;
   // union_list( one , two );
    
    //Problem 1.4
    cout << endl;
    cout << "Linked list containing set intersection of two lists :" << endl;
    intersection_list(  one , two);
    
    
    
    system("pause");
    return 0;
}
  
