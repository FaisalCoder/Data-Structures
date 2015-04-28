#include<iostream>
#include<new>
using namespace std;
class Node
{
    public:
    int data;
    Node* link;
}*Head;
class LL
{
    public:
    LL();
    void Add(int);
    void display();
    void Add2(LL *,LL*);
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
    while(temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp=temp->link;
    }
}
void LL::Add2(LL *a,LL *b)
{
    Node *temp1=a->Head;
    Node *temp2=b->Head;
    Node *insert =new Node;
    Head=insert;
    Node *temp=Head;
    While(a!=NULL && b!=NULL)
    {
        if(a->data<b-data)
        {
            insert->data=a->data;
            a=a->link;

        }
        else if(a->data>=b->data)
        {
            insert->data=b->data;
            b=b->link;
        }
        temp=insert;
        Node *insert1=new Node;
        insert=insert1;
    }
    while(a!=NULL)
    {
        insert->data=a->data;
        a=a->link;
        Node *insert1=new Node;
        temp=insert;
        insert=insert1;
    }
    while(b!=NULL)
    {
        insert->data=b->data;
        b=b->link;
        Node *insert1=new Node;
        temp=insert;
        insert=insert1;
    }
    temp->link=NULL;
}
int main()
{
    LL a,b,c;
    a.Add(5);
    a.Add(15);
    a.Add(25);
    a.Add(35);
    a.display();
    cout<<endl;
    b.Add(10);
    b.Add(20);
    b.Add(30);
    b.display();
    cout<<endl;
    c.Add2(a,b);
    c.display();


}
