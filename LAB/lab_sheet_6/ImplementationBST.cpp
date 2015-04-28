#include<iostream>
#include"BinarySearchTree.h"
#include"node.h"
using namespace std;

int main()
{
    do
    {
    int choice1, temp;
    cout << "Press 1 to insert an element in Bianry Search Tree " << endl;
    cout << "Press 2 to search the Binary Search Tree " << endl;
    cout << "Press any other key to exit " << endl;
    cin >> choice1;
    bst tree;
    
    if ( choice1 == 1 )
    {
        cout << "Enter the element you want to insert" << endl;
        cin >> temp;
        tree.insert( temp );
        cout << endl;
    }    
    
    if ( choice1 == 2 )
    {
        cout << "Enter the element you want to search" << endl;
        cin >> temp;
        tree.search( temp );
        cout << endl;
    }    
    
    else
    return 0;
    
    }
    while ( choice1 == 1 ||  choice1 == 2 )        
    
    
    system("pause");
    return 0;
}    
