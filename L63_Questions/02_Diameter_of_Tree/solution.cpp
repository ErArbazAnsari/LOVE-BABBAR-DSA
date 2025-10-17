int height(Node* node) {
    if(node == nullptr) return -1; // height in edges
    int left = height(node->left);
    int right = height(node->right);
    return max(left, right) + 1;
}

class Solution {
  public:
    int diameter(Node* root) {
        if(root == nullptr) return 0;

        int opt1 = diameter(root->left);
        int opt2 = diameter(root->right);
        int opt3 = height(root->left) + height(root->right) + 2; // diameter in nodes = edges + 1

        return max(opt1, max(opt2, opt3));
    }
};
