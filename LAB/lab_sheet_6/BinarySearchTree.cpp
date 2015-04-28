#include<iostream>
#include"BinarySearchTree.h"
#include"node.h"
using namespace std;

//bst :: bst ()
//{ root = 0;  }

int bst :: size = 0;

void bst :: insert (int x )
{
    node * n = new node;
    n->key = x;
    
    
    if ( root == 0 )
    {
        root = n;
        root->left = 0;
        root->right = 0;
        
    }
    
    else
    {
        node* p = root;
        while ( p != 0 )
        {
            if ( x > p->key )
            p = p->right;
            
            else
            p = p-left;
        }
        
        p = n ;
        p->left = 0;
        p->right = 0;  
    }
    
    size++;
}              

node* bst :: search ( int x )
{
    node* p = root;
    
    while ( p != 0 && p->key != x )
    {
            if ( x > p->key )
            p = p->right;
            
            else
            p = p->left;
    }
    
    if ( p == 0 )
    {
        cout << "Element not found!! " << endl;
        return 0;
    }
    
    else
    {
        cout << "Element found!! " << endl;
        return p;
    }           
}




        
        
