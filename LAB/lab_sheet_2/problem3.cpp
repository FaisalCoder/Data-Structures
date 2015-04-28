#include<iostream>
#include<new>
using namespace std;

class node
{
    public:
        int data;
        node* next;        
};

class CLL
{
    private:
        node* head ;
        int length;
    public:
        CLL()
        { head = 0; length = 0;}
        
        void insert_beginning();
        void insert_after_particular_element();
        void insert_end();
        void delete_first();
        void delete_anywhere_after_particular_node();
        void delete_last();
        void delete_particular_node();
        void search();
        void display();
};

void CLL :: insert_beginning()
{
    int value;
    cout << "Enter value of the element to be inserted in the list" << endl;
    cin >> value;
    
    node* newnode = new node;
    newnode->data = value;
    
    if ( length == 0 )
    {
        newnode->next = head;
        head = newnode;
        newnode->next = newnode ;
    }
    
    else if ( length == 1 )
    {
        newnode->next = head;
        node* p = head;
        head = newnode;
        p->next = head;
    } 
    
    else
    {
        node* p = head;
       
        while( p->next != head )
        p = p->next;
        
        p->next = newnode;
        newnode->next = head;
        head = newnode;
    }
    
    length++;
}

void CLL :: insert_after_particular_element()    
{
    int key, value, index = 1;
    cout << "Enter position after which you want to insert the element" << endl;
    cin >> key;
    cout << "Enter value of the element to be inserted in the list " << endl;
    cin >> value;
    
    node* newnode = new node;
    newnode->data  = value;
    
    if( key > length ) cout << "Not valid" << endl;
    
    else if ( key == length )
    {
         node*p = head;
         newnode = head;
         
         while ( index < key)
         {
               p = p->next;
               index++; 
         }
         
         p->next = newnode;
         length++;
    }
    
    else
    {
        node*p = head;
        while ( index < key)
         {
               p = p->next;
               index++; 
         }
        
        newnode->next = p->next; 
        p->next = newnode;
        length++;
    }
}

void CLL :: insert_end()
{
     int value;
     cout << "Enter value of the element to be inserted in the list" << endl;
     cin >> value;    
     
     node*p = head;
     node* newnode = new node;
     newnode->data  = value;
     
     if ( length == 0 )
     {
        newnode->next = newnode;
        head = newnode;
     }
     
     else
     {
        while( p->next != head )
        p = p->next;
        
        newnode->next = p->next;
        p->next = newnode;
     }
     
     length++;
}

void CLL :: delete_first()
{
     node* p = head; 
     node *q = head;
     
     if( length == 0) { cout << "Not valid " << endl; }
     
     else if ( length == 1 )
     {
          head = 0 ;
          delete p;
          length--;
     }
     
     else
     {
         while( p->next != head )
         p = p->next;
         
         head = head->next;
         p->next = head;
         delete q;
         
         length--;
     }
}

void CLL :: delete_anywhere_after_particular_node()
{
    int key, index = 1;
    cout << "Enter the position of the node after which you want to delete the element " << endl;
    cin >> key;
    
    if( key >= length )cout << "Not valid " << endl;
    
    else
    {
        node* p = head; node * q;
        while( index < key )
         {
               p = p->next;
               index++;
         }
         
         q = p->next;
         p->next = q->next;
         delete q;
         length--;
    }
}

void CLL :: delete_last()
{
     if ( length == 0 )
     cout << "Not valid" << endl;
     
     else if ( length == 1)
    { delete_first();}
     
     else 
     {
          node*p = head; node* q;    //check if define q seperately
          while ( p->next != head )
          {
                q = p;
                p = p->next;
          }
          
          q->next = p->next;
          delete q;
          length--;
     }
}

void CLL :: delete_particular_node()
{
    int key;
    cout << "Enter the position of the node to be deleted  " << endl;
    cin >> key;
    
    if( key > length) cout << "Not valid" << endl;
    
    else if ( key == 1)
    delete_first();
    
    else if ( key == length )
    delete_last();
    
    else
    {
        int index = 1;
        node*p = head; node* q;
        
        while( index < key )
        {
               q = p;
               p = p->next;
               index++;
        }
        
        q->next = p->next;
        delete p;
        length--;
    }
}

void CLL :: search()
{
     int value, index = 1;
    cout << "Enter the value to be searched" << endl;
    cin >> value;
    
    node* p = head;
    
    if ( p->data == head->data)
    cout << "Value found at node 1" << endl;
    
    else
    {
        p = p->next;
         
        while( p->data !=value && p != head )
        {
               p = p->next;
               index++;
        }
        
        if ( p == head )
        cout << "Value not found  "  << endl;
        else
        cout << "Value found at node " << index << endl;
    }
}

void CLL :: display()                                              
{
     int index = 1;
    node*p = head;
    
    if( length == 0 )
    cout << "No value to be shown " << endl;
    
    else
    {
        cout << "Value at node " << index << p->data << endl;
        p = p->next;
        
        while ( p != head)
        {
           index++;
           cout << "Value at node " << index << " : " << p->data << endl;
           p = p->next;
             
        }
    }
}        
        
    
                    
         
    
     
                      
    
