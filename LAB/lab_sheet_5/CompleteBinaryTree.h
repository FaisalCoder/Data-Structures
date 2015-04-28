#ifndef binarytree
#define binarytree

struct node
{
       int key;
       node* left, *right;
       int index;
       
};

void Make_BinaryTreeArray( node*,int );            //int - array of integers to make a tree
int Height_Of_BinaryTree( node*);
int Max_Of_BinaryTree( node*);
int Min_Of_BinaryTree( node*);
void Search_BinaryTree( node* , int );   
int preorder_Traversal(node* );
int postorder_Traversal( node* );
int max( int, int );
int min ( int ,int );
int sizegive();
node* Make_BinaryTreeLL(int ); 
int inorder_Traversal(node* ); 
node* sibling_check( node*  );
void Search_BinaryTree2( node* , int );
int cousin_check( node *  );
#endif
