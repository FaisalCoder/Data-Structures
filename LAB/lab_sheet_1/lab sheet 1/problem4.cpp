#include<iostream>
#include<time.h>
using namespace std;

struct node {
int data;
node* next;
};

class list
{
    public:
    list(){head=NULL;}
    void add( int n)
    {
        node* newnode= new node;
        newnode->next= NULL;
        newnode->data= n;

      if (head == NULL)
      {
          head = newnode;
      }

      else
      {
          node * p = head;
          while( p->next != 0)
          {
              p = p->next;
          }
           newnode->next = p->next ;
           p->next = newnode;
      }
    }

    void display()
    {
        node * p = head;

        if ( p == 0) return;

        while( p != 0)
          {
              cout << p->data << " ";
              p = p->next;
          }


    }

    void reverse()
    {
        node * curr = head,*next,*prev= NULL;
        while( curr != 0)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            head = curr;
            curr = next;
        }


    }

    private:
    node* head;
};

int main()
{
    list a ;
    a.add(1);
    a.add(2);
    a.add(3);
    a.add(4);
    a.add(5);
    a.display();
    a.reverse();
    a.display();

    //system("pause");
    return 0;
}
