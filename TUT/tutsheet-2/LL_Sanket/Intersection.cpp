#include<iostream>
#include<new>
using namespace std;
class Node
{
    public:
    int data;
    Node* link;
};
class LL
{
    public:
    Node *Head;
    LL();
    void Add(int);
    void display();
    void Add2(LL *,LL *);
    void sort();
    Node * Hea();
};

LL::LL()
{
    Head=NULL;
}
void LL::Add(int m)
{
    Node *temp;
    Node *insert=new Node;
    insert->data=m;
    insert->link=NULL;
    temp=Head;
    if(temp==NULL)
    {
        Head=insert;
    }
    else{
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=insert;}
}
void LL::display()
{
    Node *temp;
    temp=Head;
    if(Head==NULL)
    cout<<"No element in common LL"<<endl;
    else
    while(temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp=temp->link;
    }
}
Node* LL::Hea()
{
    return Head;
}
void LL::sort()
{
    int tempo;
    Node *count;
   Node *temp=Head;
   count=temp;
   Node *temp1=Head->link;
   for(int i=0;;i++)
   {
   while((temp1!=NULL)&&(count!=temp1))
   {
       if((temp1->data)<(temp->data))
       {
           tempo=temp1->data;
           temp1->data=temp->data;
           temp->data=tempo;

       }
       temp1=temp1->link;
       temp=temp->link;
   }
   count=temp;
   temp=Head;
   temp1=temp->link;
   if(count==Head)
   break;
   }
}
void LL::Add2(LL *temp1,LL *temp2)
{
    Node *a;
    a=temp1->Hea();
    Node *b=temp2->Hea();
    while((a!=NULL)&&(b!=NULL))
    {
        if((a->data)<(b->data))
        a=a->link;
        else if((a->data)>(b->data))
        b=b->link;
        else
        {
            Add(a->data);
            a=a->link;
            b=b->link;
        }
   }
    /*while(a!=NULL)
    {
        Add(a->data);
        a=a->link;
    }
    while(b!=NULL)
    {
        Add(b->data);
        b=b->link;
    }*/
}
int main()
{
    LL a;
    a.Add(25);
    a.Add(2);
    a.Add(22);
    a.Add(3);
    a.display();
    cout<<endl;
    a.sort();
    a.display();
    cout<<endl;
    LL b;
    b.Add(10);
    b.Add(30);
    b.Add(28);
    b.sort();
    b.display();
    cout<<endl;
    LL c;
    c.Add2(&a,&b);
    c.display();
    cout<<endl;


}
