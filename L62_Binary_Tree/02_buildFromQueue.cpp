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

void buildFromQueue(Node* &root){
    queue<Node*>q;
    cout << "enter the data: " << endl;
    int data;
    cin>> data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout << "Enter left node data for " << temp->data << ": ";
        int  leftData;
        cin>> leftData;

        if(leftData != -1){
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node data for " << temp->data << ": ";
        int  rightData;
        cin>> rightData;

        if(rightData != -1){
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
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
    buildFromQueue(root);

    // verifying
    levelOrderTraversal(root);
    return 0;
}