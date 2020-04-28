//author @Nishant

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data, pos;
    Node *left, *right;
};

Node* FindMin(Node* root){
	while(root->left != NULL) root = root->left;
	return root;
}

Node* get(int data, int pos){
    Node *temp = new Node();
    temp->left = temp->right = NULL;
    temp->data = data;
    temp->pos = pos;
    return temp;
}

Node* insert(Node *root, int data, int pos){
    if(root == NULL){
        root = get(data, pos);
        cout << pos << endl;
    }else if(root->data >= data) root->left = insert(root->left, data, pos=(2*pos));
	else if(data > root->data) root->right = insert(root->right, data, pos=(2*pos+1));
	return root;
}

Node *del(Node *root, int data, bool pr = true){
    if(root == NULL){
        return root;
    }else if(data < root->data){
        root->left = del(root->left, data, pr);
    }else if(data > root->data){
        root->right = del(root->right, data, pr);
    }else{
        if (pr)
            cout << root->pos << endl;
        if (root->left == NULL && root->right == NULL){
            delete root;
            root = NULL;
            return root;
        }else if (root->left == NULL){
            Node *temp = root;
            root = root->right;
            delete temp;
            return root;
        }else if (root->right == NULL){
            Node *temp = root;
            root = root->left;
            delete temp;
            return root;
        }else{
            Node *temp = FindMin(root->right);
            root->data = temp->data;
            root->right = del(root->right, temp->data, pr = false);
            return root;
        }
    }
}
int main(){
    long long q;
    cin >> q;
    Node *root = NULL;
    while(q--){
        long long x;
        char o;
        cin >> o >> x;
        if(o == 'i') root = insert(root, x, 1);
        else root = del(root, x);
    }
}
