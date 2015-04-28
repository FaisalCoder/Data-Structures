#ifndef bst
#define bst
#include"node.h"


class bst
{
      private:
    node* root ;
    
    public:
        bst(){ root = 0; }
        void insert (int);
        node* search ( int ); 
        static int size;        // return searched value
}; 




#endif   
