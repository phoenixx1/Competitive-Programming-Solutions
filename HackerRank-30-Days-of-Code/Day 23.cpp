//BST Level-Order Traversal
//author @Nishant

#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }

	void levelOrder(Node * root){
    int h = maxDepth(root);
    for (int i = 1; i <= h; i++)  
        printGivenLevel(root, i);
    }

    void printGivenLevel(Node *root, int level){
        if(root==NULL)
            return;
        if(level==1)
            cout << root->data << " ";
        else if(level>1){
            printGivenLevel(root->left, level-1);
            printGivenLevel(root->right, level-1);
        }
    }

    int maxDepth(Node *node){
        if(node == NULL){
            return 0;
        }else{
            int lDepth = maxDepth(node->left);
            int rDepth = maxDepth(node->right);
            if(lDepth>rDepth)
                return(lDepth+1);
            else
                return(rDepth+1);
        }
    }


};//End of Solution
int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}