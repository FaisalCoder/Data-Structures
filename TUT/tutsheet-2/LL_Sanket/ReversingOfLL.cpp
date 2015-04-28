#include<iostream>
using namespace std;
#include<new>
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
    void Reverse();
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
void LL::Reverse()
{
    Node *temp,*temp1;
    temp=Head;
    temp1=temp->link;
    Head=temp1;
    temp->link=NULL;
    if(Head->link==NULL)
    {
        Head->link=temp;
        temp->link=NULL;
    }
    else{
    while(Head!=NULL)
    {
        Head=Head->link;
        temp1->link=temp;
        temp=temp1;
        temp1=Head;
    }
    Head=temp;
    temp=NULL;
    temp1=NULL;
    }
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
    a.Reverse();
    a.display();

}
