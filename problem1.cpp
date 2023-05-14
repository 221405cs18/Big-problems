//Name: Asatullaev Fayzulloh
//ID: 221405


#include <iostream>
using namespace std;

class BinarySearchTree{
    int val;
    BinarySearchTree* left, *right;
    BinarySearchTree(): val(0), left(nullptr), right(nullptr){};
    BinarySearchTree(int x): val(x), left(nullptr), right(nullptr){};
};

class Node{
    BinarySearchTree* root;
    public:
    Node(){root==nullptr;}
    
    void insertion(int n){
        
    }
};
using namespace std;

int main()
{
    cout<<"Hello World";

    return 0;
}
