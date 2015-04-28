#include<iostream>
#include<new>
using namespace std;

class node
{
    public:
        int data;
        node* next;
        node* prev;
};

class DLL
{
    private:
        node* head ;
        int length;
    public:
        DLL()
        { head = 0; length = 0;}
        
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

void DLL::insert_beginning()
{
    int value;
    cout << "Enter value of the element to be inserted in the list" << endl;
    cin >> value;
    
    node* newnode = new node;
    newnode->data = value;
    newnode->next = head;
    newnode->prev = 0;
    
    if ( head == NULL )
    {
        head = newnode;
    }
    
    else
    {
        head->prev = newnode;
        head = newnode;
    }
    
    length++;
}

void DLL::insert_after_particular_element()
{
    int key, value, index = 1;
    cout << "Enter position after which you want to insert the element" << endl;
    cin >> key;
    cout << "Enter value of the element to be inserted in the list " << endl;
    cin >> value; 
    
    if ( key > length || key == 0 )
    cout << "Not valid " << endl;
    
    else
    {
        node* p = head;
        
        while( p != 0 && index < key )
        {
            p = p->next ;
            index++;
        }
        
        node* newnode = new node;
        newnode->data  = value;
        newnode->next  = p->next;
        
        if ( index != length )
        {
            (p->next)->prev = newnode;
         }
            newnode->prev = p;
            p->next = newnode;
        
        
        length++;       
    }
}

void DLL :: insert_end()
{
    node* p = head;
    
    if( head == 0)
    insert_beginning();
    
    else
    {
        int value;
        cout << "Enter value of the element to be inserted in the list" << endl;
        cin >> value;
        
        while( p->next != 0)
        {
            p = p->next;
        }
        
        node* newnode = new node;
        newnode->data = value;
        newnode->next = p->next;
        p->next = newnode;
        newnode->prev = p;
        length++;
    }
}            
        
void DLL :: delete_first()  
{
    node *p = head;
    
    if( length == 0) cout << "Not valid " << endl;
    
    else if ( length == 1)
    {
        head = p->next;
        delete p;
        length--;
    }
    
    else
    {
        (p->next)->prev = 0;
        head = p->next;
        delete p;
        length--;
    }
}

void DLL :: delete_last()
{
    if( length == 1 )
    delete_first();
    
    else if ( length == 0)
    cout << "Not valid " << endl;
    
    else
    {
        node* p = head;
        
        while( p->next != 0)
        p = p->next;
        
        (p->prev)->next = p->next;
        delete p;
        length--;
    }    
}    

void DLL :: delete_anywhere_after_key ()
{
    int key;
    cout << "Enter the position of the node after which you want to delete the element " << endl;
    cin >> key;
    
    if( key == 0)
    delete_first();
    
    else if ( length == key )
    cout << "Not valid " << endl;
    
    else if ( key == (length - 1) )
    delete_last();
    
    else
    {
        int index = 1;
        node * p = head;
        
        while( p != 0 && index < key )
        {
            p = p->next;
            index++;
        }
        
        node* temp = p->next;
        p->next = (p->next)->next;
        (p->next)->prev = p;
        delete temp;
        length--;
    }
}

void DLL :: delete_particular_node() 
{
    int key, index = 1 ;
    cout << "Enter the position of the node to be deleted" << endl;
    cin >> key;
    
    if( key == 0 || key > length )
    cout << "Not valid " << endl;
    
    else if ( key == length)
    delete_last();
    
    else if ( key == 1 && key != length )
    delete_first();
    
    else
    {
        node *p = head;
        while ( p->next != 0 && index < key )
        {
            p = p->next;
            index++;
        }
        
        (p->prev)->next = p->next;
        (p->next)->prev = p->prev;
        delete p;
        length--;
    }
}

void DLL :: search()
{
    int value, index = 1;
    cout << "Enter the value to be searched" << endl;
    cin >> value;
    
    node* p = head; 
    while( p != 0 && p->data != value )
    {
        p = p->next;
        index++;
    }
                
    if( p == 0) cout << "Given value not found in the list" << endl;
    else cout << "Given value " << value << " found at " << index << " node " << endl;  
    
}             
    
void DLL :: display()
{
    int index = 1;
    node*p = head;
    
    if( length == 0 )
    cout << "No value to be shown " << endl;
    
    else
    {
        while ( p != 0)
        {
           cout << "Value at node " << index << " : " << p->data << endl;
           p = p->next;
           index++;  
       }
   }
}                                   
      
    
    
    
        
                   
                              
                                         
                                                    
                                                                          
