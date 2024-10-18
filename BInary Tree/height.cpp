#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node{
    public :
    int data;
    Node *left;
    Node *right;

    // constructor :
    Node(int data){
        this -> data = data;
        this -> right= NULL;
        this -> left = NULL;
    }
};

Node *buildtree(Node *root){
    int data;
    cout<<"Enter data "<<endl;
    cin>>data;
    root = new Node(data);
    if(data == -1){
        return NULL;
    }

    // left part ke lia input kara lo :
    cout<<"Enter data for left part of "<<data<<endl;
    root -> left = buildtree(root->left);
    // right part ke lia input kara lo :
    cout<<"Enter data for right part of "<<data<<endl;
    root->right = buildtree(root->right);

    return root;
}
//1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1     from left to right :
//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1     from left to left :



int height(Node *root){
    if(root == NULL){
        return 0;
    }
    int left = height(root->left);                         // or to find the maximum depth of a binary tree :
    int right = height(root->right);                       // to find the height of a binary tree :

    int ans = max(left,right) + 1;

    return ans;
}



int main()
{
     
    Node *root = NULL;
   root = buildtree(root);
    cout<<"height = "<<height(root)<<endl;
    

    return 0;
}