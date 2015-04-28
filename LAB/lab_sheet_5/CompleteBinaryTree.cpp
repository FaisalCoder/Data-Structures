#include<iostream>
#include<string>
#include"CompleteBinaryTree.h"
#include"CompleteBinaryTreeWithParent.h"


using namespace std;

       
int main()
{
    int choice1, choice2;
    int count = 0;
    cout << "Enter appropriate key  :" << endl;
    cout << "Press 1 for implementing Complete Binary Tree without parent pointer" << endl;
    cout << "Press 2 for implementing Complete Binary Tree with parent pointer" << endl;
    cout << "Press any other key to exit" << endl;
    cout << "You pressed : " ; 
    cin >> choice1;
    cout << endl;
    
    if ( choice1 == 1 )
    {    
         node*ptr;int N;node* btree = new node[N+1];
         do
         {
             cout << "Press 1 to make a Complete Binary Tree" << endl;
             cout << "Press 2 to find the height of Complete Binary Tree" << endl;
             cout << "Press 3 to find maximum value in Complete Binary Tree" << endl;
             cout << "Press 4 to find minimum value in Complete Binary Tree" << endl;
             cout << "Press 5 to search for a particular value in Complete Binary Tree" << endl;
             cout << "Press 6 to do a pre-order traversal of Complete Binary Tree" << endl;
             cout << "Press 7 to do a post-order traversal of Complete Binary Tree" << endl;
             cout << "Press 8 to do a in-order traversal of Complete Binary Tree" << endl;
             cout << "Press 9 to find a sibling of a given value in Complete Binary Tree" << endl;
             cout << "Press 10 to find a cousin of a given value in Complete Binary Tree" << endl;
             
             cout << "Press any other key to exit" << endl;
             cout << "You pressed : " ; 
             cin >> choice2;
             cout << endl;
             
             if ( choice2 == 1)
             {
                  
                  cout << "Enter the size of tree : " ;
                  cin >> N;
                  
                  if ( N > 7 )
                  {
                      ptr = &(btree[1]);
                      Make_BinaryTreeArray( btree , N); 
                      cout << endl;
                  }
                  
                  else
                  cout << "Please enter the size value greater than 8 to form a tree of height at least 3 " << endl;    
                        
             }
            
             else if ( choice2 == 2 && count != 0)
             {
                  int height ;
                  height = Height_Of_BinaryTree( ptr );
                  cout << "Height of Binary Tree is " << height << endl;
                  cout << endl;
             }
             
             else if ( choice2 == 3 && count != 0)
             {
                  int max = Max_Of_BinaryTree( ptr );
                  cout << "Maximum value in tree is " << max << endl;
                  cout << endl;
             }
             
             else if ( choice2 == 4 && count != 0)
             {
                  int min = Min_Of_BinaryTree( ptr );
                  cout << "Minimum value in tree is " << min << endl;
                  cout << endl;
             }
             
             else if ( choice2 == 5 && count != 0)
             {
                cout << "Enter an integer to search in tree " << endl;
                int temp;
                cin >> temp;
                Search_BinaryTree( ptr ,temp);
                int check = sizegive();             // to reset size
                if ( check == 0)
                cout << "Element not found! " << endl;
                
                else
                cout << "Element found! " << endl;
                cout << endl;
             }
             
             else if ( choice2 == 6 && count != 0)
             {
                  cout << "Pre order Tree traversal : " << endl;
                  preorder_Traversal( ptr );
                  cout << "\n" << endl;
             }
             
             
             else if ( choice2 == 7 && count != 0)
             {
                  cout << "Post order Tree traversal : " << endl;
                  postorder_Traversal( ptr );
                  cout << "\n" << endl;
             }
             
             else if ( choice2 == 8 && count != 0)
             {
                  cout << "In order Tree traversal : " << endl;
                  inorder_Traversal( ptr );
                  cout << "\n" << endl;
             }
             
             else if ( choice2 == 9 && count != 0)   // sibling
             {
                 node* sibling;
                 sibling = sibling_check( ptr );
                 
                 if ( sibling != 0 )
                 cout << "Sibling is " <<  sibling->key << endl;
                 cout << endl;
                
             }    
             
             else if ( choice2 == 10 && count != 0)   //cousin
             {
                 int qw;    // dummy useless
                 qw = cousin_check( ptr );
                 cout << endl;
                
             }     
             
             else
             return 0;
             count++;
         }
while( choice2 == 1 || choice2 == 2 ||choice2 == 3 ||choice2 == 4 ||choice2 == 5 ||choice2 == 6 || choice2 == 7 ||
 choice2 == 8 || choice2 == 9 || choice2 == 10 ); 
                       
    }  
    /*   
  //linked list       
  else if ( choice1 == 2 )
    {
              node* ptr2;
              int N;
         do
         {
             cout << "Press 1 to make a Complete Binary Tree" << endl;
             cout << "Press 2 to find the height of Complete Binary Tree" << endl;
             cout << "Press 3 to find maximum value in Complete Binary Tree" << endl;
             cout << "Press 4 to find minimum value in Complete Binary Tree" << endl;
             cout << "Press 5 to search for a particular value in Complete Binary Tree" << endl;
             cout << "Press 6 to do a pre-order traversal of Complete Binary Tree" << endl;
             cout << "Press 7 to do a post-order traversal of Complete Binary Tree" << endl;
             cout << "Press 8 to do a in-order traversal of Complete Binary Tree" << endl;
             cout << "Press 9 to find a sibling of a given value in Complete Binary Tree" << endl;
             cout << "Press 10 to find a cousin of a given value in Complete Binary Tree" << endl;
             
             cout << "Press any other integer to exit" << endl;
             cout << "You pressed : " ;
             cin >> choice2;
             cout << endl;
             
             if ( choice2 == 1)
             {
                  
                  cout << "Enter the size of tree " ;
                  cin >> N;
                  
                  if ( N > 7)
                  {
                      ptr2  = Make_BinaryTreeLL(N); 
                      cout << endl;
                  }    
                  
                  else
                  cout << "Please enter the size value greater than 8 to form a tree of height at least 3 " << endl;    
                        
                       
             }
             
             else if ( choice2 == 2 && count != 0)
             {
                  int height ;
                  height = Height_Of_BinaryTree( ptr2 );
                  cout << "Height of Binary Tree is " << height << endl;
                  cout << endl;
             }
             
             else if ( choice2 == 3 && count != 0)
             {
                  int max = Max_Of_BinaryTree( ptr2 );
                  cout << "Maximum value in tree is " << max << endl;
                  cout << endl;
             }
             
             else if ( choice2 == 4 && count != 0)
             {
                  int min = Min_Of_BinaryTree( ptr2 );
                  cout << "Minimum value in tree is " << min << endl;
                  cout << endl;
             }
             
             else if ( choice2 == 5 && count != 0)
             {
                cout << "Enter an integer to search in tree " << endl;
                int temp;
                cin >> temp;
                Search_BinaryTree( ptr2 ,temp);
                int check = sizegive();
                if ( check == 0)
                cout << "Element not found! " << endl;
                
                else
                cout << "Element found! " << endl;
                cout << endl;
             }
             
             else if ( choice2 == 6 && count != 0)
             {
                  cout << "Pre order Tree traversal : " << endl;
                  preorder_Traversal( ptr2 );
                  cout << "\n" << endl;
             }
             
             
             else if ( choice2 == 7 && count != 0)
             {
                  cout << "Post order Tree traversal : " << endl;
                  postorder_Traversal( ptr2 );
                  cout << "\n" << endl;
             }
             
             else if ( choice2 == 8 && count != 0)
             {
                  cout << "In order Tree traversal : " << endl;
                  inorder_Traversal( ptr2 );
                  cout << "\n" << endl;
             }
             
             
             else if ( choice2 == 9 && count != 0)   // sibling
             {
                 node* sibling;
                 sibling = sibling_check( ptr2 );
                 
                 if ( sibling != 0 )
                 cout << "Sibling is " <<  sibling->key << endl;
                 cout << endl;
                
             }    
             
             else if ( choice2 == 10 && count != 0)   //cousin
             {
                 int qw;    // dummy useless
                 qw = cousin_check( ptr2 );
                 cout << endl;
                
             }     
             
             else
             return 0;
             
             count++;
         }
  while( choice2 == 1 || choice2 == 2 ||choice2 == 3 ||choice2 == 4 ||choice2 == 5 ||choice2 == 6 || choice2 == 7 ||
       choice2 == 8 || choice2 == 9 || choice2 == 10); 
 
         
    }
    */
    
    // WITH PARENT POINTER
    else if ( choice1 == 2 )
    {
              node_wp* ptr2;
              int n;
         do
         {
             cout << "Press 1 to make a Complete Binary Tree" << endl;
             cout << "Press 2 to find the height of Complete Binary Tree" << endl;
             cout << "Press 3 to find maximum value in Complete Binary Tree" << endl;
             cout << "Press 4 to find minimum value in Complete Binary Tree" << endl;
             cout << "Press 5 to search for a particular value in Complete Binary Tree" << endl;
             cout << "Press 6 to do a pre-order traversal of Complete Binary Tree" << endl;
             cout << "Press 7 to do a post-order traversal of Complete Binary Tree" << endl;
             cout << "Press 8 to do a in-order traversal of Complete Binary Tree" << endl;
             cout << "Press 9 to find a sibling of a given value in Complete Binary Tree" << endl;
             cout << "Press 10 to find a cousin of a given value in Complete Binary Tree" << endl;
             
             cout << "Press any other integer to exit" << endl;
             cout << "You pressed : " ;
             cin >> choice2;
             cout << endl;
             
             if ( choice2 == 1)
             {
                  
                  cout << "Enter the size of tree " ;
                  cin >> n;
                  
                  if ( n > 7)
                  {
                      ptr2  = Make_BinTreeWithParentPtr(  n ); 
                      cout << endl;
                  }    
                  
                  else
                  cout << "Please enter the size value greater than 8 to form a tree of height at least 3 " << endl;    
                        
                       
             }
             
             else if ( choice2 == 2 && count != 0)
             {
                  int height ;
                  height = Height_Of_BinaryTree( ptr2 );
                  cout << "Height of Binary Tree is " << height << endl;
                  cout << endl;
             }
             
             else if ( choice2 == 3 && count != 0)
             {
                  int max = Max_Of_BinaryTree( ptr2 );
                  cout << "Maximum value in tree is " << max << endl;
                  cout << endl;
             }
             
             else if ( choice2 == 4 && count != 0)
             {
                  int min = Min_Of_BinaryTree( ptr2 );
                  cout << "Minimum value in tree is " << min << endl;
                  cout << endl;
             }
             
             else if ( choice2 == 5 && count != 0)
             {
                cout << "Enter an integer to search in tree " << endl;
                int temp;
                cin >> temp;
                search ( ptr2, temp ); 
                
                int dummy = sizegivewp();
                node_wp* check = Get_univ();
                //univ=0;
                if ( check == 0)
                cout << "Element not found! " << endl;
                
                else
               { cout << "Element found! " << endl;
                cout << check->key << endl;}
                cout << endl;
             }
             
             else if ( choice2 == 6 && count != 0)
             {
                  cout << "Pre order Tree traversal : " << endl;
                  preorder_Traversal( ptr2 );
                  cout << "\n" << endl;
             }
             
             
             else if ( choice2 == 7 && count != 0)
             {
                  cout << "Post order Tree traversal : " << endl;
                  postorder_Traversal( ptr2 );
                  cout << "\n" << endl;
             }
             
             else if ( choice2 == 8 && count != 0)
             {
                  cout << "In order Tree traversal : " << endl;
                  inorder_Traversal( ptr2 );
                  cout << "\n" << endl;
             }
             
             
             else if ( choice2 == 9 && count != 0)   // sibling
             {
                 node_wp* sibling;
                 sibling = sibling_check( ptr2 );
                 
                 if ( sibling != 0 )
                 cout << "Sibling is " <<  sibling->key << endl;
                 cout << endl;
                
             }    
             
             else if ( choice2 == 10 && count != 0)   //cousin
             {
                 int qw;    // dummy useless
                 qw = cousin_check( ptr2 );
                 cout << endl;
                
             }     
             
             else
             return 0;
             
             count++;
         }
  while( choice2 == 1 || choice2 == 2 ||choice2 == 3 ||choice2 == 4 ||choice2 == 5 ||choice2 == 6 || choice2 == 7 ||
       choice2 == 8 || choice2 == 9 || choice2 == 10); 
 
         
    }
    
    
    
    
    else 
    return 0;
    
    system("pause");
    return 0;
}
    
    
   
    
    
   
