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
void LL::Add2(LL *temp1,LL *temp2)
{
    Node *a;
    a=temp1->Hea();
    Node *b=temp2->Hea();

    while(a!=NULL&&b!=NULL)
    {
        if((a->data)<(b->data))
        {
            Add(a->data);
            //temp->data=a->data;
            a=a->link;
        }
        else if((a->data)>=(b->data))
        {
            Add(b->data);
            //temp->data=b->data;
            b=b->link;
        }
        /*Node *insert1=new Node;
        temp->link=insert1;
        temp=insert1;*/

    }
    while(a!=NULL)
    {
        Add(a->data);
        //temp->data=a->data;
        a=a->link;
        /*Node *insert1=new Node;
        temp->link=insert1;
        temp=insert1;*/
    }
    while(b!=NULL)
    {
        Add(a->data);
        //temp->data=b->data;
        b=b->link;
        /*Node *insert1=new Node;
        temp->link=insert1;
        temp=insert;*/
    }
    //temp->link=NULL;
}
int main()
{
    LL a;
    a.Add(5);
    a.Add(15);
    a.Add(25);
    a.Add(35);
    a.display();
    cout<<endl;
    LL b;
    b.Add(10);
    b.Add(20);
    b.Add(30);
    b.display();
    cout<<endl;
    LL c;
    c.Add2(&a,&b);
    c.display();
    cout<<endl;
    //cout<<c.Hea();


}
