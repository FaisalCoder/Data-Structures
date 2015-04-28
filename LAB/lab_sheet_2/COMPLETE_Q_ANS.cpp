#include<iostream>
#include<new>
#include<string>
using namespace std;

class node
{
    public:
        int data;
        node* next;
        node* prev;
};
// SLL
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

void SLL:: delete_last()
{
    node* currnode = head;
    int k = 0;
    node* prevnode;

    while( currnode->next )
    {
        prevnode = currnode;
        currnode = currnode->next;
        k++;
    }

    if( k == 0 )
    {
        head == NULL;
        delete currnode;
    }

    else
    {
        prevnode->next = currnode->next;
        delete currnode;
    }
}


void SLL :: delete_particular_node()
{
    int k;
    cout << "Enter the position of the node to be deleted" << endl;
    cin >> k;

    node* currnode ;
    currnode = head;
    int index = 1;
    node* prevnode  ;


    while( (index < k) && (currnode->next != 0))
    {
        prevnode = currnode;
        currnode = currnode->next;
        index++;
    }

    if (index == k)
    {

            if( index == 1)
            head = currnode->next;

            else
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

// DLL

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

    else if ( length == key || length < key)
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

// CLL

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
//cout << length;
    if( key > length || key == length )cout << "Not valid " << endl;

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
          delete p;
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
     int value, index = 2;
    cout << "Enter the value to be searched" << endl;
    cin >> value;

    node* p = head;

    if ( p->data == value)
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
        cout << "Value at node " << index << " : " << p->data << endl;
        p = p->next;

        while ( p != head)
        {
           index++;
           cout << "Value at node " << index << " : " << p->data << endl;
           p = p->next;

        }
    }
}




























// MAIN PROGRAM STARTS

int main()
{
    int choice_1,k;
    cout << "WELCOME !!!" << endl;
    cout << "Enter 1 for Singly Linked List" << endl;
    cout << "Enter 2 for Doubly Linked List" << endl;
    cout << "Enter 3 for Circularly Linked List\n" << endl;
    cout << "Please enter the appropriate NUMBER to implement any of the above\n  "
    << "TO EXIT PRESS ANY OTHER KEY :";
    cin >> choice_1;
    cout << endl;

    char choice_2,choice_3;
    if( choice_1 == 1 || choice_1 == 2 || choice_1 == 3 )
    {
         cout << "Enter 'a' to CREATE THE LIST" << endl;
         cout << "Enter 'b' to INSERT AN ELEMENT IN THE BEGINNING" << endl;
         cout << "Enter 'c' to INSERT AN ELEMENT AFTER A PARTICULAR ELEMENT" << endl;
         cout << "Enter 'd' to INSERT AN ELEMENT AT THE END" << endl;
         cout << "Enter 'e' to DELETE FIRST ELEMENT" << endl;
         cout << "Enter 'f' to DELETE THE ELEMENT AFTER A PARTICULAR ELEMENT" << endl;
         cout << "Enter 'g' to DELETE THE LAST ELEMENT" << endl;
         cout << "Enter 'h' to DELETE A PARTICULAR NODE" << endl;
         cout << "Enter 'i' to SEARCH THE LIST FOR AN ELEMENT" << endl;
         cout << "Enter 'j' to DISPLAY THE LIST\n" << endl;
         cout << "Please enter the appropriate ALPHABET to implement any of the above\n  "
              << "TO EXIT PRESS ANY OTHER KEY :";
         cin >> choice_3;
         cout << endl;


    if( choice_1 == 1)
    {
            if ( choice_3 == 'a')
            {
                SLL one;

            while( k )
            {
                cout << "Please enter the appropriate ALPHABET to implement any of the above\n "
                     <<  "TO EXIT PRESS ANY OTHER KEY : " ;
                cin >> choice_2;

            if ( choice_2 == 'b')
            one.insert_beginning();
            else if ( choice_2 == 'c')
            one.insert_after_particular_element();
            else if ( choice_2 == 'd')
            one.insert_end();
            else if ( choice_2 == 'e')
            one.delete_first();
            else if ( choice_2 == 'f' )
            one.delete_anywhere_after_key();
            else if ( choice_2 == 'g' )
            one.delete_last();
            else if ( choice_2 == 'h')
            one.delete_particular_node();
            else if ( choice_2 == 'i')
            one.search();
            else if ( choice_2 == 'j' )
            {
                 cout << endl;
                 one.display();
            }
            else
            k = 0;
            cout << endl;}}

            else
            cout << "Invalid Entry" << endl;
    }

       else if( choice_1 == 2)
    {
            if ( choice_3 == 'a')
            {
                DLL two;

            while( k )
            {
                cout << "Please enter the appropriate ALPHABET to implement any of the above\n "
                     <<  "TO EXIT PRESS ANY OTHER KEY : " ;
                cin >> choice_2;

            if ( choice_2 == 'a')
            DLL two;
            else if ( choice_2 == 'b')
            two.insert_beginning();
            else if ( choice_2 == 'c')
            two.insert_after_particular_element();
            else if ( choice_2 == 'd')
            two.insert_end();
            else if ( choice_2 == 'e')
            two.delete_first();
            else if ( choice_2 == 'f' )
            two.delete_anywhere_after_key();
            else if ( choice_2 == 'g' )
            two.delete_last();
            else if ( choice_2 == 'h')
            two.delete_particular_node();
            else if ( choice_2 == 'i')
            two.search();
            else if ( choice_2 == 'j' )
            {
                 cout << endl;
                 two.display();
            }
            else
            k = 0;
            cout << endl;}}

            else
            cout << "Invalid Entry" << endl;
    }

     else if( choice_1 == 3)
    {
          if ( choice_3 == 'a')
            {
                CLL three;

            while( k )
            {
                cout << "Please enter the appropriate ALPHABET to implement any of the above\n "
                     <<  "TO EXIT PRESS ANY OTHER KEY : " ;
                  cin >> choice_2;

            if ( choice_2 == 'a')
            CLL three;
            else if ( choice_2 == 'b')
            three.insert_beginning();
            else if ( choice_2 == 'c')
            three.insert_after_particular_element();
            else if ( choice_2 == 'd')
            three.insert_end();
            else if ( choice_2 == 'e')
            three.delete_first();
            else if ( choice_2 == 'f' )
            three.delete_anywhere_after_particular_node();
            else if ( choice_2 == 'g' )
            three.delete_last();
            else if ( choice_2 == 'h')
            three.delete_particular_node();
            else if ( choice_2 == 'i')
            three.search();
            else if ( choice_2 == 'j' )
            {
                 cout << endl;
                three.display();
            }
           else
            k = 0;
            cout << endl;}}

            else
            cout << "Invalid Entry" << endl;
    }
}
    else
    cout << "Invalid entry " << endl;



//    system("pause");
    return 0;
}
