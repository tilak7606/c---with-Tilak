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


int height(Node *root){
    if(root == NULL){
        return 0;
    }
    int left = height(root->left);                         // or to find the maximum depth of a binary tree :
    int right = height(root->right);                       // to find the height of a binary tree :

    int ans = max(left,right) + 1;

    return ans;
}


int diameter(Node *root){
    if(root == NULL){
        return 0;

    }

    int first = diameter(root->left);
    int second = diameter(root->right);
    int third = height(root->left) + height(root->right) + 1;

    int ans = max(third,max(first,second));
    return ans;
}


pair<int,int> dia(Node *root){
    if(root == NULL){
        return {0,0};
    }
    pair<int,int> left = dia(root->left);
    pair<int,int> right = dia(root->right);

    int first = left.first;
    int second = right.first;
    int third = left.second+right.second+1;

    pair<int,int> ans;
    ans.first = max(first,max(third,second));
    ans.second = max(left.second,right.second)+1;
    return ans;

}

//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1   
bool is_balanced(Node *root){
    if(root == NULL){
        return true;
    }

    bool left = is_balanced(root->left);
    bool right = is_balanced(root -> right);

    bool diff = abs(height(root->left) - height(root->right)) <= 1;

    if(left && right && diff){
        return true;
    }
    else {
        return false;
    }
    }

    pair<bool,int> is_balanced_fast(Node * root){
        if(root == NULL){
            return {true,0};
        }

        // left ke lia call kardo :
        pair<bool,int> left = is_balanced_fast(root->left);
        pair<bool,int> right = is_balanced_fast(root->right); 
        bool diff = abs(left.second - right.second) <= 1;
        pair<bool,int> ans;
        ans.second = max(left.second,right.second) + 1;

        if(left.first && right.first && diff){
            ans.first = true;
        }
        else{
            ans.first = false;
        }
        return ans;
    }

int main()
{
     
    Node *root = NULL;
   root = buildtree(root);
   
   cout<<"Diameter = "<<diameter(root)<<endl;
    cout<<"Diameter = "<<dia(root).first<<endl;

    cout<<is_balanced(root)<<endl;
    cout<<is_balanced_fast(root).first<<endl;
    

    

    return 0;
}