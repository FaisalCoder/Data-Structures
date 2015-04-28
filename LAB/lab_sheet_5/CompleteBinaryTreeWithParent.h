#ifndef binarytree2
#define binarytree2

struct node_wp
{
       int key;
       node_wp* left, *right, *parent;
       int index;
       
};

node_wp* Make_BinTreeWithParentPtr(int );
void search ( node_wp *, int );
int Height_Of_BinaryTree( node_wp*);
int Max_Of_BinaryTree( node_wp*);
int Min_Of_BinaryTree( node_wp*);
int preorder_Traversal(node_wp* );
int postorder_Traversal( node_wp* );
int inorder_Traversal(node_wp* ); 
int max2( int, int );
int min2 ( int ,int );
int sizegivewp();
node_wp* Get_univ();
// make one sibling function
node_wp* sibling_check( node_wp*  );
// make one cousin function
int cousin_check( node_wp*  );


#endif
