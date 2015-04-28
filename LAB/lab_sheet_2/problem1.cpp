#include<iostream>
#include<new>
using namespace std;

class node
{
    public:
        int data;
        node* next;
};

class SLL
{
    private:
        node* head ;
    public:
        SLL()
        { head = 0;}
        
        void insert_beginning();
        void insert_after_particular_element();
        void insert_end();
        void delete_first();
        void delete_anywhere_after_key();
        void delete_last();
        void delete_particular_node();
        void search();
        void display();
};

void SLL::insert_beginning()
{
    int value;
    cout << "Enter value of the element to be inserted in the list" << endl;
    cin >> value;
    node* newnode = new node;
    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

void SLL::insert_after_particular_element()
{
    int p, value, index = 1;
    cout << "Enter position after which you want to insert the element" << endl;
    cin >> p;
    cout << "Enter value of the element to be inserted in the list " << endl;
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
            
void SLL :: insert_end()
{
    int value;
    cout << "Enter value of the element to be inserted at end of the last" << endl;
    cin >> value;
    
    node* currnode = head;
    
    while ( currnode->next != 0)
    {
        currnode = currnode->next;
    }
    
    node* newnode = new node;
    newnode->data = value;
    newnode->next = currnode->next;
    currnode->next = newnode;
}
    
void SLL :: delete_first()
{
    node* currnode = head;
    head = currnode->next;
    delete currnode;
}

void SLL :: delete_anywhere_after_key()
{
    int k;
    cout << "Enter the position of the node after which you want to delete the element " << endl;
    cin >> k;
    
    node* currnode = head;
    int index = 1;
    
    while( currnode->next != 0 && index < k )
    {
        currnode = currnode->next;
        index++;
    }
    
    node* prevnode ;
    
    if( currnode->next != 0 && k == index )
    {
        prevnode = currnode;
        currnode = currnode->next;
        prevnode->next = currnode->next;
        delete currnode;
    }
    
    else cout << "No element to be deleted " << endl;
    
}            

void SLL :: delete_last()
{
    node* currnode = head;
    int k = 0;
    node* prevnode;
    
    while( (currnode->next) != 0 )
    {
        prevnode = currnode;
        currnode = currnode->next;
    }
    
    if( k == 0)
    {
        head = 0;
        delete currnode;
    }
    
    else 
    {
        prevnode->next = currnode->next;
        delete  currnode;
    }
}

void SLL :: delete_particular_node()
{
    int k;
    cout << "Enter the position of the node to be deleted" << endl;
    cin >> k;
    
    node* currnode = head;
    int index = 1;
    node* prevnode = 0;
    
    while( index < k && currnode->next != 0)
    {
        prevnode = currnode;
        currnode = currnode->next;
        index++;
    }
    
    if (index == k)
    {
        prevnode->next = currnode->next;
        delete currnode;
    }
    
    else cout << "No node to be deleted " << endl;
}            
        
void SLL :: search()             
{
    int k;
    cout << "Enter the value to be searched" << endl;
    cin >> k;
    
    node* currnode = head;
    int index = 1;
    
    while( currnode != 0 && currnode->data != k )
    {
        currnode = currnode->next;
        index++;
    }
    
    if ( currnode != 0)
    cout << "Given value " << k << " found at " << index << " node " << endl;
    
    else  cout << "Given value not found in the list" << endl;
}        

void SLL :: display()               
{
    node* currnode = head;
    int index = 1;
    
    if ( currnode == 0 ) cout << "No value to be shown " << endl;
    
    else
    {
        while( currnode != 0)
        
       {
           cout << "Value at node " << index << " : " << currnode->data << endl;
           currnode = currnode->next;
           index++;
       }
   }    
}    
            
                  
           
        
    
         
        
        
    
    
    

