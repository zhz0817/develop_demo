#include <bits/stdc++.h>
using namespace std;
// https://leetcode.cn/problems/implement-trie-prefix-tree/description/


class Trie {
public:
    vector<Trie*> children;
    bool is_end;
    Trie() : children(26), is_end(false) {}


    void insert(string word) {
        Trie* trie = this;
        for(char ch : word){
            int index = ch - 'a';
            if(trie->children[index] == nullptr){
                trie->children[index] = new Trie();
            }
            trie = trie->children[index];
        }
        trie->is_end=true;
    }

    Trie* searchTrie(string word){
        Trie* node = this;
        for(int i=0;i<word.length();i++){
            char ch = word[i];
            int index = ch - 'a';
            if(node->children[index] == nullptr)
                return nullptr;
            node = node->children[index];
        }
        return node;
    }
    bool search(string word) {
        Trie* trie = searchTrie(word);
        return trie!= nullptr&&trie->is_end;
    }

    bool startsWith(string prefix) {
        return searchTrie(prefix)!= nullptr;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
// class Solution
// {
// public:
    
// };

int main()
{
    return 0;
}