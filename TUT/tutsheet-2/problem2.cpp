#include<iostream>
#include<new>
using namespace std;

struct node 
{
      int data;
      node* next;
};

class CLL
{
      private:       
              node* head;
              int length;
              
      public:
             CLL()
                  {
                         node* q = new node;
                         head = q;
                         head->data = -1; 
                         head->next = head;
                         length = 0;
                  }
             
             void append( int );
             friend void store_integer( long int, CLL );
             friend CLL* addint ( CLL*, CLL*,CLL & );
             node* return_head(){return head;}
             void display();
};

void CLL :: append ( int value )
{
     node* newnode = new node;
     newnode->data = value;
     node* currnode = head; 
      
     
     if ( currnode->next == head )
     {
          newnode->next = head->next;
          head->next = newnode;
     }
     
     else
     {
         while( currnode -> next != head )
         {
                currnode = currnode->next;
         }      
         
         newnode->next = currnode->next;
         currnode->next = newnode;
     }   
     
     length++;
}

void store_integer( long int n , CLL p ) 
{
      //p.length = 0;
      int d = n ,r;
     
     while( d > 0)
     {
            r = d%100000;
            d = d/100000;                    
            p.append(r);
        //    p.length++;
     }
}

CLL* addint ( CLL* a, CLL* b ,CLL & result)
{
     node* p1, *p2;
     p1 = ((*a).head)->next;
     p2 = ((*b).head)->next;
     //CLL result;
     int sum, carry = 0, k ,count = 0;
     
     if( ((*a).length) > ((*b).length) )
     {
         while( count < ((*a).length) )
         {
                if( p2->data >= 0)
                sum = (p1->data + p2->data + carry) ;
                
                else
                sum = (p1->data + carry) ; 
                
                carry = sum/100000;
                sum = sum%100000;   
                
                result.append( sum );
                
                p1 = p1->next;
                p2 = p2->next;
                count++;
         }
     }
     
     else
     {
         while( count < ((*b).length) )
         {
                if( p1->data >= 0)
                sum = (p1->data + p2->data + carry) ;
                
                else
                sum = (p2->data + carry) ; 
                
                carry = sum/100000;
                sum = sum%100000;   
                
                result.append( sum );
                
                p1 = p1->next;
                p2 = p2->next;
                count++;
         }
     }
     
     return &result;
}
     
void CLL :: display()
{
     node* p = head;
     int index = 1;
     
     if( p == 0) 
     cout << "No value to be shown" <<endl;
     
     else
     {
         cout << p->data << " ";
         p = p->next;
         
         while( p != head )
         {
                cout << p->data << " ";
                p = p->next;
                index++;
         }
         cout << endl;
     }
}
         
int main()
{
    CLL f ,k , ans ;
   
    store_integer( 1 ,f );
    f.display();
    
    store_integer( 2 , k);
    k.display();
    
    CLL* p11 = &f;
    CLL* p22 = &k;
    CLL* p3;
    
    store_integer( 0 , ans);
    ans.display();
    
    p3 = addint( p11 , p22 , ans );
   (*p3).display();
    
    
    system("pause");
    return 0;
}
     
     
        
              
