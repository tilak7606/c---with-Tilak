#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class TrieNode{
    public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    // constructor :
    TrieNode(char ch){
        data = ch;
        for(int i = 0;i < 26; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};


class Trie{
    public :
    TrieNode *root;

    Trie(){
        root = new TrieNode('\0');
        }

        void insertUtill(TrieNode *root, string word){
            if(word.length() == 0){
                root->isTerminal = true;
                return;
            }

            TrieNode *child;
            
            // Assuming all the characters are in capital :
            int index = word[0]-'A';

            // if present :
            if(root->children[index] != NULL){
                child = root->children[index];
            }
            else{
                child = new TrieNode(word[0]);
                root->children[index] = child;
            }

            // aage ka recursion bhaiya sambhal lage :
            insertUtill(child,word.substr(1));
            }

            void insertword(string s){
                insertUtill(root,s);
            }

            

            // searching :
            
            bool searchUtill(TrieNode *root,string word){
                // base case :
                if(word.length()== 0){
                    return root->isTerminal;
                }

                // Assuming all characters are in CAPS :
                int index = word[0]-'A';

                TrieNode *child;

                if(root->children[index] != NULL){
                    child = root->children[index];
                }
                else{
                    return false;
                }

                // baki recursion Bhaiya dekh lenga :
               return searchUtill(child,word.substr(1));
            }




            bool searchword(string word){
                return searchUtill(root,word);
            }
};


int main()
{
    Trie *t = new Trie();
    t->insertword("TILAK");

    cout<<t->searchword("TILAK")<<endl;
        cout<<"Hello \n"<<endl;
    
     


    return 0;
}