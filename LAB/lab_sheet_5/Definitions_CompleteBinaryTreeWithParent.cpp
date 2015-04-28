#include<iostream>
#include<string>
#include<cmath>
#include<new>
#include"CompleteBinaryTreeWithParent.h"
using namespace std;
int sizewp , sizewpcopy;
node_wp* univ1 = 0;

node_wp* Make_BinTreeWithParentPtr( int n )      // input N in main fnct
{
     cout << "Size of tree" << n << endl; 
     sizewpcopy = sizewp = n;
     node_wp * p;
     int i = 0;
     int j = 1;
     node_wp* addarray[n+1];
     cout << "Enter integers to implement the Complete Binary Tree" << endl;
     int temp;
     
     while ( i < n )            // store address of all the nodes in the array
     {
         cout << "Enter value of the integer : "; 
         cin >> temp;
         node_wp* newnode = new node_wp;
         newnode->key = temp;
         addarray[j] = newnode;
         j++;
         i++;
     }
     addarray[0] = 0;
     i = 1;
     //
     cout << "Key" << "\t" << "Add" << "\t" << "Left child" << "\t" << "Right child " << "Parent" << endl; 
     while( i < (n+1))
     {
            addarray[1]->parent = 0;
            
            if ( 2*i > n )
            addarray[i]->left = 0;
            
            else
            addarray[i]->left = addarray[2*i];
            
            if ( (2*i + 1) > n )
            addarray[i]->right = 0;
            
            else
            addarray[i]->right = (addarray[2*i + 1]);
            
            if ( i != 1 )
            addarray[i]->parent = addarray[abs( i/2)];
      //      
            cout <<  addarray[i]->key << "\t " << addarray[i] << "\t" << addarray[i]->left << "\t" << addarray[i]->right << 
                 "\t" <<  addarray[i]->parent << "\t " <<  endl;  
            i++;
     }
     
     p = addarray[1];
     return p;
}

void search ( node_wp * p, int k )     // search option
{
         if ( p != 0 )
         {
              if ( p->key == k )
              univ1 = p ;
              
              search ( p->left , k);
              search (p->right , k);
            
         }
         
         //if ( sizewp == 0 )
         //return 0;
}

node_wp* Get_univ()
{
         node_wp* q = univ1;
         univ1 = 0;
         return q;
}
         
int preorder_Traversal( node_wp * p )
{
     if (  p != 0)
     {
          cout << p->key << "  " ;
          preorder_Traversal(  p->left );
          preorder_Traversal(  p->right );
          
     }
     
     else
     return 0;
}

int postorder_Traversal( node_wp * p )  
{
     if ( p != 0)
     {
         postorder_Traversal(  p->left );
         postorder_Traversal(  p->right );
         cout << p->key << "  " ;
     }
     
     else
     return 0;
}

int inorder_Traversal(node_wp* p)
{
    if ( p != 0)
     {
         inorder_Traversal(  p->left );
         cout << p->key << "  " ;
         inorder_Traversal(  p->right );
         
     }
     
     else
     return 0;
}  

int max2 ( int a ,int b)        
{
    if ( a > b )
    return a;
    
    else 
    return b;

}
               
int Height_Of_BinaryTree( node_wp* p  )
{
    if (  p == 0 )
    return -1;
    
    else
    return max( Height_Of_BinaryTree( p->left ),Height_Of_BinaryTree( p->right)) + 1;
}

int Max_Of_BinaryTree( node_wp* p )
{
    if ( p != 0 && p->left == 0 && p->right == 0   )
    return p->key;
    
    else if ( p != 0 && (p->left != 0 || p->right != 0 ) )
    return max2(max2( Max_Of_BinaryTree( p->left),Max_Of_BinaryTree( p->right)),p->key);
    
    else if ( p == 0 )
    return 0; 
} 
    
int min2 ( int a ,int b)        
{
    if ( a > b )
    return b;
    
    else 
    return a;
}

int Min_Of_BinaryTree( node_wp* p )
{
    if ( p != 0 && p->left == 0 && p->right == 0   )
    return p->key;
    
    else if ( p != 0 && (p->left != 0 || p->right != 0 ) )
    return min2(min2( Min_Of_BinaryTree( p->left),Min_Of_BinaryTree( p->right)),p->key); 
    
    else if ( p == 0 )
    return 9999999; 
}      

int sizegivewp()     // to reset size
{
    int q = sizewp;
    sizewp = sizewpcopy;
    return q;
} 

node_wp* sibling_check( node_wp* p )
{
         int patient;
        cout << "Enter the integer whose sibling you want to find : ";
        cin >> patient;
        
         search ( p, patient );    // univ is pointer of p
        node_wp * qparent;
        
        if ( univ1 != 0)
        qparent = univ1->parent;
        
        else
        {cout << "No sibling found" << endl;
        return 0;}
        
        univ1 = 0;
        int dummy = sizegivewp() ;        // reset size
        
        if ( qparent == 0 )
        {cout << "No sibling found" << endl;
        return 0;}
        
        else 
        {
             if( qparent->left == 0 || qparent->right == 0 )
             {cout << "No sibling found" << endl;
        return 0;}
             
             if ( qparent->left != 0 && (qparent->left)->key == patient)
             return qparent->right;
             
             if ( qparent->right != 0 && (qparent->right)->key == patient)
             return qparent->left;
        }
}    
             
int cousin_check( node_wp* p )
{
    int patient;
    cout << "Enter the integer whose cousin you want to find : ";
    cin >> patient;
    
    int dummy2 = sizegivewp();              //reset size
    
    node_wp* q , * qparent , *grandp, *uncle;
    search ( p, patient );
        // q is pointer to given node
    if ( univ1 == 0)
    {
         cout << "Cousin not found!!" << endl;
         return 0;
    }
    
    else
    qparent = univ1->parent;
    
    univ1 = 0;
    dummy2 = sizegivewp();
    
    if ( qparent == 0)
    {
         cout << "Cousin not found!!" << endl;
         return 0;
    }
    
    else
    {
        grandp = qparent->parent;
        
        if ( grandp == 0 )            // uncle doesn't exist
        {
         cout << "Cousin not found!!" << endl;
         return 0;
        }
        
        else                            // uncle assigned
        {
            if ( grandp->left == qparent )
            uncle = grandp->right;
            
            else
            uncle = grandp->left; 
            
            int c1,c2,cousincount = 0;                   //cousins
            if (uncle->left != 0)
            c1 = uncle->left->key;
            else
            c1=0;    
            //check
            
            if (uncle->right != 0) 
            c2 = uncle->right->key;
            else
            c2=0;    
        
            if ( c1 !=  0)
            {cout << "Cousin is " << c1 << endl;
            cousincount++;
            }
            
            if ( c2 !=  0)
            {cout << "Cousin is " << c2 << endl;
            cousincount++;
            }
            
            if ( cousincount == 0)
            cout << "Cousin not found!!" << endl;
        }
            return 0;
    } 
}
    
            
        
        
         










