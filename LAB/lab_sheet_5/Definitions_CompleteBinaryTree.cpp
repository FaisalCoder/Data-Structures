#include<iostream>
#include<string>
#include<cmath>
#include<new>
#include"CompleteBinaryTree.h"
using namespace std;


int size ;
int sizecopy;   // DECLARE GLOBALLY  
int sizecopy2;   // DECLARE GLOBALLY  


void Make_BinaryTreeArray( node* a , int N )
{
     sizecopy2 = sizecopy = size = N;
     
     cout << "Enter integers to implement the Complete Binary Tree" << endl;
     int i = 1;
     while( i < (N+1))
     {
            int temp;
            cout << "Enter value of the integer : "; 
            cin >> temp;
            a[i].key = temp;
            a[i].index = i;
            i++;
     }
     
     a[0].key = -1;              // a[0] removed
     a[0].left = 0;
     a[0].right = 0;
     
     i = 1;
               
     cout << "Key" << "\t" << "Add" << "\t" << "Left child" << "\t" << "Right child " << endl; 
     while( i < (N+1))
     {
            if ( 2*i > N )
            a[i].left = 0;
            
            else
            a[i].left = &(a[2*i]);
            
            if ( (2*i + 1) > N )
            a[i].right = 0;
            
            else
            a[i].right = &(a[2*i + 1]);
            
            cout <<  a[i].key << "\t " << &a[i] << "\t" << a[i].left << "\t" << a[i].right << "\a" << endl;  
            i++;
     }
}
            
int preorder_Traversal( node * p )
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

int postorder_Traversal( node * p )  
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

int max ( int a ,int b)        
{
    if ( a > b )
    return a;
    
    else 
    return b;

}
               
int Height_Of_BinaryTree( node* p  )
{
    if (  p == 0 )
    return -1;
    
    else
    return max( Height_Of_BinaryTree( p->left ),Height_Of_BinaryTree( p->right)) + 1;
}

int Max_Of_BinaryTree( node*p )
{
    if ( p != 0 && p->left == 0 && p->right == 0   )
    return p->key;
    
    else if ( p != 0 && (p->left != 0 || p->right != 0 ) )
    return max(max( Max_Of_BinaryTree( p->left),Max_Of_BinaryTree( p->right)),p->key);
    
    else if ( p == 0 )
    return 0; 
} 
    
int min ( int a ,int b)        
{
    if ( a > b )
    return b;
    
    else 
    return a;
}

int Min_Of_BinaryTree( node*p )
{
    if ( p != 0 && p->left == 0 && p->right == 0   )
    return p->key;
    
    else if ( p != 0 && (p->left != 0 || p->right != 0 ) )
    return min(min( Min_Of_BinaryTree( p->left),Min_Of_BinaryTree( p->right)),p->key); 
    
    else if ( p == 0 )
    return 9999999; 
}      

void Search_BinaryTree( node*p , int k)
{    
     if( p != 0 )
     {
         Search_BinaryTree( p->left , k );
         Search_BinaryTree( p->right , k );
         
         if ( p->key != k )
         size--;
     }
}
          
int sizegive()
{
    int q = size;
    size = sizecopy;
    return q;
} 

//linked list implementation
node* Make_BinaryTreeLL(  int N )
{
      sizecopy = size = N;
      cout << "Size of tree" << N << endl; //sdasdasd
     node*p;
     int i = 0;
     int j = 1;
     node* addarray[N+1];
     cout << "Enter integers to implement the Complete Binary Tree" << endl;
     int temp;
     
     while ( i < N )
     {
         cout << "Enter value of the integer : "; 
         cin >> temp;
         node* newnode = new node;
         newnode->key = temp;
         addarray[j] = newnode;
         j++;
         i++;
     }
     addarray[0] = 0;
     i = 1;
  //   cout << "Key" << "\t" << "Add" << "\t" << "Left child" << "\t" << "Right child " << endl; 
     while( i < (N+1))
     {
            if ( 2*i > N )
            addarray[i]->left = 0;
            
            else
            addarray[i]->left = addarray[2*i];
            
            if ( (2*i + 1) > N )
            addarray[i]->right = 0;
            
            else
            addarray[i]->right = (addarray[2*i + 1]);
            
          //  cout <<  addarray[i]->key << "\t " << addarray[i] << "\t" << addarray[i]->left << "\t" << addarray[i]->right << "\a" << endl;  
            i++;
     }
     
     p = addarray[1];
     return p;
}
// add these functions to main.............
//inorder
int inorder_Traversal(node* p)
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
node * univ = 0; 
void Search_BinaryTree2( node*p , int k)
{    
     if( p != 0 )
     {
         if ( ( p->left != 0 && (p->left)->key == k  ) || ( p->right != 0 && (p->right)->key == k  ))  
         {univ = p;
         //cout << "PARENT found " << univ->key << endl;
         }
         
         Search_BinaryTree2( p->left , k );
         Search_BinaryTree2( p->right , k );
        
      //   cout << " Size " << size-- << endl;
     }
}

     
node* sibling_check( node* p )  // p is root
{
    int patient;
    cout << "Enter the integer whose sibling you want to find : ";
    cin >> patient;
    
    Search_BinaryTree2( p , patient);            
    node* check = univ;
    node * temp ;
   
    int a1 = sizegive();
    univ = 0;
    
    if ( check == 0 )
    {cout << "No sibling found!!  " << endl;
    return 0;}
                
    else
    {
        if ( check->left == 0 || check->right == 0) // new statement
        {cout << "No sibling found!!  " << endl;temp =0 ;}
        
        else if ( (check->left)->key == patient  )
        temp = check->right;
        
        else if  (  (check->right)->key == patient )
        temp = check->left;
        
        else
        {cout << "No sibling found!!  " << endl;
        temp = 0;}
    }
    
    
    return temp;
}
        
    
int cousin_check( node * p  )
{
    int patient;
    cout << "Enter the integer whose cousin you want to find : ";
    cin >> patient;
    int a2 = sizegive(); 
    node * patient_parent , * patient_uncle , * patient_gf;
    Search_BinaryTree2(p , patient);
    patient_parent = univ  ; // fill parameters         
    int countcousin = 0;
    
    a2 = sizegive();   //reset
    univ = 0;
   // cout << "Loop Phir chala\n size " << size << endl;
    
    if ( patient_parent == 0 )
    {cout << "No cousin found!! " << endl;
    return 0;}
    
    else 
    {
         
         
         Search_BinaryTree2( p , patient_parent->key);
         patient_gf = univ ; // parent search
         
         if ( patient_gf == 0 )
         {cout << "No cousin found!!" << endl;
         return 0;}
         
         else
         {
             if ( patient_gf->left == patient_parent && patient_gf->right != 0)
             {
                 if ( (patient_gf->right)->left != 0)
                 {
                      cout << ((patient_gf->right)->left)->key << " is a cousin " << endl;
                      countcousin ++;
                 }
                 
                 if ( (patient_gf->right)->right != 0)
                 {
                      cout << ((patient_gf->right)->right)->key << " is a cousin " << endl;
                      countcousin ++;
                 }
                 
                 if ( countcousin == 0 )
                 cout << "No cousin found" << endl;
                 
                 return 0;
             }
                 
             else if ( patient_gf->right == patient_parent && patient_gf->left != 0)
             {
                  if ( (patient_gf->left)->left != 0)
                 {
                      cout << ((patient_gf->left)->left)->key << " is a cousin " << endl;
                      countcousin ++;
                 }
                 
                 if ( (patient_gf->left)->right != 0)
                 {
                      cout << ((patient_gf->left)->right)->key << " is a cousin " << endl;
                      countcousin ++;
                 }
                 
                 if ( countcousin == 0 )
                 cout << "No cousin found" << endl;
                 
                 return 0;
                  
             }
                  
             else 
             {
                  cout << "No cousin found!!" << endl;
                  return 0;
             }
         }
    }     // reset size
    
}     
         
     
        
    






     
                
