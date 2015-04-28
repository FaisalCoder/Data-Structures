#include<iostream>
#include<new>
#include<cstring>
#include<iomanip>
using namespace std;
int conversion(string,int,int);
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
    friend int conversion(string,int,int);
    void storeS(string);
    void AddLL(LL *,LL *);
    Node * Hea();
};

LL::LL()
{
    Node *newnode=new Node;
    newnode->data=-1;
    Head=newnode;
    newnode->link=Head;
}
void LL::Add(int m)
{
    Node *temp;
    Node *insert=new Node;
    insert->data=m;
    temp=Head;
    while(temp->link!=Head)
    {
        temp=temp->link;
    }
    temp->link=insert;
    insert->link=Head;
}
int conversion(string a,int s,int e)
{
    int num=0;int n=1;
    for(int i=e;i>=s;i--)
    {
        num+=(a[i]-'0')*n;
        n*=10;
    }
    return num;

}
void LL::storeS(string a)
{
    int l=a.length();
    int c=l-1;
    while(c>=0)
    {
        if(((c-4)<=0)&&(c>=0))
        Add(conversion(a,0,c));
        else
        Add(conversion(a,c-4,c));
        c-=5;
    }
}
void LL::AddLL(LL *a,LL *b)
{
    Node *temp1=a->Hea();
    temp1=temp1->link;
    Node *temp2=b->Hea();
    temp2=temp2->link;
    int num,c=0;
    while(((temp1)!=a->Hea())&&((temp2)!=b->Hea()))
    {
        num=(temp1->data)+(temp2->data)+c;
        c=0;
        if(num>99999)
        {
            c=num/100000;
            num=num%100000;
            Add(num);
        }
        else
        Add(num);
        temp1=temp1->link;
        temp2=temp2->link;
       // display();
        //cout<<endl;
    }
    while(temp1!=(a->Hea())&&(temp2==b->Hea()))
    {
        num=(temp1->data)+c;
        c=0;
        if(num>99999)
        {
            Add(num%100000);
            c=num/100000;
        }
        else
        Add(num);
        temp1=temp1->link;
    }
    while(temp2!=(b->Hea())&&(temp1==a->Hea()))
    {
        num=(temp2->data)+c;
        c=0;
        if(num>99999)
        {
            Add(num%100000);
            c=num/100000;
        }
        else
        Add(num);
        temp2=temp2->link;
    }

}
void LL::display()
{
    Node *temp;
    temp=Head;
    int a=1;
    while(a==1)
    {
        cout<<setfill('0')<<setw(5)<<temp->data<<"  ";
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
    string c,d;
    cout<<"String 1"<<endl;
    cin>>c;
    cout<<"String 2"<<endl;
    cin>>d;
    LL a;
    a.storeS(c);
    a.display();
    cout<<endl;
    LL b;
    b.storeS(d);
    b.display();
    cout<<endl;
    LL m;
    m.AddLL(&a,&b);
    m.display();
}
