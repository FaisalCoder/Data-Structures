#include<iostream>
#include<cmath>
using namespace std;

struct node
{
       int key;
       node* left, * right;
};


class bst
{
      private:
    node* root ;
    
    public:
        bst(){ root = 0; }
        void insert (int);
        node* search ( int ); 
        static int size; 
        node * Getroot();       // return searched value
}; 

int bst :: size = 0;

node * bst :: Getroot(){ return root;}

void bst :: insert (int x )
{
    node * n = new node;
    n->key = x;
    
    
    if ( root == 0 )
    {
        root = n;
        root->left = 0;
        root->right = 0;
        cout << "0" << endl;
    }
    
    else
    {
        node* p = root;node* old;
        while ( p != 0 )
        {
            old = p;
              
            if ( x > p->key )
            {p = p->right;cout << "R" << endl;}
            
            else
            {p = p->left;cout << "L" << endl;}
            
            
        }
        
        p = n ;
        n->left = 0;
        n->right = 0;  
         
    }
    
    size++;
}              

node* bst :: search ( int x )
{
    node* p = root;
    
    while ( p != 0 && p->key != x )
    {
            if ( x > p->key )
            {p = p->right;cout <<"Right\n" ;}
            
            else
            {p = p->left;cout <<"Left\n" ;}
    }
    
    if ( p == 0 )
    {
        cout << "Element not found!! " << endl;
        return 0;
    }
    
    else if ( p->key == x )
    {
        cout << "Element found!! " << endl;
        return p;
    }           
}



int main()
{
    int choice1, temp;
    bst tree;
    do
    {
    
    cout << "Press 1 to insert an element in Bianry Search Tree " << endl;
    cout << "Press 2 to search the Binary Search Tree " << endl;
    cout << "Press any other key to exit " << endl;
    cin >> choice1;
    
    
    if ( choice1 == 1 )
    {
        cout << "Enter the element you want to insert" << endl;
        cin >> temp;
        tree.insert( temp );
        cout << endl;
    }    
    
    else if ( choice1 == 2 )
    {
        cout << "Enter the element you want to search" << endl;
        cin >> temp;
        node*dummy;
        dummy = tree.search( temp );
        cout << endl;
    }    
    
    else
    return 0;
    
    }
    while ( choice1 == 1 ||  choice1 == 2 ) ;       
    
    
    
    system("pause");
    return 0;
}
