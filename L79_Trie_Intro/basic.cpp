#include <iostream>
using namespace std;

class TrieNode{
    public:
        char data;
        TrieNode* children[26];
        bool isTerminal;

        TrieNode(char ch){
            data = ch;
            for(int i=0; i<26; i++){
                children[i] = NULL;
            }
            isTerminal = false;
        }
};

class Trie{
    public:
        TrieNode* root;

        Trie(){
            root  = new TrieNode('\0');
        }
        
        void insertUtil(TrieNode* root, string word){ //O(l) -> l is length of word
            // base case
            if(word.length() == 0){
                root->isTerminal = true;
                return;
            }

            // assuming word will be in caps
            int index = word[0]-'A';
            TrieNode* child;
            
            // present
            if(root->children[index] != nullptr){
                child = root->children[index];
            }else{
                // absent
                child = new TrieNode(word[0]);
                root->children[index] = child;
            }

            // recursion
            insertUtil(child, word.substr(1));
        }

        void insertWord(string word){
            insertUtil(root, word);
        }

        bool searchUtil(TrieNode* root, string word){ //O(l) -> l is length of word
            // base case
            if( word.length() == 0){
                return root->isTerminal;
            }
            int index = word[0] - 'A';
            TrieNode* child;

            // present
            if(root->children[index] != nullptr){
                child = root->children[index];
            }else{
                // absent
                return false;
            }
            // recursion
            return searchUtil(child, word.substr(1));
        }

        bool searchWord(string word){
            return searchUtil(root, word);
        }
        // removing
        bool removeUtil(TrieNode* root, string word){ //O(l) -> l is length of word
            if(root == nullptr) return false;
            // base case
            if(word.length() == 0){
                if(root->isTerminal) {
                    root->isTerminal = false;
                    // If node has no children, it can be deleted
                    for(int i=0; i<26; i++){
                        if(root->children[i] != nullptr)
                            return false; // can't delete, has children
                    }
                    return true; // can delete
                }
                return false; // word not present
            }
            int index = word[0] - 'A';
            TrieNode* child = root->children[index];
            if(child == nullptr) return false; // word not present
            // recursion
            bool shouldDeleteChild = removeUtil(child, word.substr(1));
            if(shouldDeleteChild){
                delete child;
                root->children[index] = nullptr;
                // check if current node can also be deleted
                if(!root->isTerminal){
                    for(int i=0; i<26; i++){
                        if(root->children[i] != nullptr)
                            return false;
                    }
                    return true;
                }
            }
            return false;
        }

        bool removeWord(string word){
            return removeUtil(root, word);
        }
};

int main(){
    Trie *t = new Trie();
    t->insertWord("ARM");
    t->insertWord("TIME");
    t->insertWord("DO");
    t->insertWord("HAPPY");

    cout << endl << "Present or not " << t->searchWord("HAPPY") << endl;
    t->removeWord("HAPPY");
    cout << endl << "Present or not after remove " << t->searchWord("HAPPY") << endl;
    cout << "deletion " << t->removeWord("HAPPY") << endl;
    return 0;
}