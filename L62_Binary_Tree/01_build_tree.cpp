#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int d){
            this->data = d;
            this->left = this->right = NULL;
        }
};

Node* buildTree(Node* root){
    int d;
    cout << "enter data of node: ";
    cin >> d;
    
    if(d == -1){
        return NULL;
    }
    
    root = new Node(d);
    
    cout << "enter data for inserting in left: ";
    root->left = buildTree(root->left);
    
    cout << "enter data for inserting in right: ";
    root->right = buildTree(root->right);
    return root;
}

void printMyTree(Node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    printMyTree(root->left);
    printMyTree(root->right);
}

void levelOrderTraversal(Node* root){
    queue<Node*>q;
    if(root == NULL){
        return;
    }
    q.push(root);
    q.push(NULL);  // Add NULL marker after root

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        
        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);  // Add NULL marker for next level
            }
        }
        else{
            cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int main(){
    Node* root = NULL;
    root = buildTree(root);

    cout << "root address -> " << root << endl;
    
    // cout << "Tree elements: "<< printMyTree(root) << endl;
    
    // level order traversal;
    levelOrderTraversal(root);
    return 0;
}