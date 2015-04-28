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
   // void Add2(LL *,LL *);
   // void sort();
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
    temp=Head;
    int a=1;
    if(Head==NULL)
    {   Head=insert;
        insert->link=Head;
    }
    else
    {
    while(a==1)
    {
        temp=temp->link;
        if(temp->link==Head)
        break;
    }
    temp->link=insert;
    insert->link=Head;
    }
}
void LL::display()
{
    Node *temp;
    temp=Head;
    int a=1;
    while(a==1)
    {
        cout<<temp->data<<"  ";
        temp=temp->link;
        if(temp==Head)
        break;
    }
}
Node* LL::Hea()
{
    return Head;
}
int main()
{
    long long int num;
    cout<<"Enter long integers"<<endl;
    cin>>num;
    cout<<num<<endl;
    LL a;
    a.Add(25);
    a.Add(2);
    a.Add(22);
    a.Add(3);
    a.display();
    cout<<endl;
}
