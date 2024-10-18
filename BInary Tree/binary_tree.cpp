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


// level order traversing :
void level_order_traversing(Node * root){
    queue<Node *>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp -> left){
                q.push(temp -> left);
            }
            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
}

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
//1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1


void inorder(Node *root){
    if(root == NULL){
        return ;
    }
    //LNR;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);


}


void preorder(Node *root){
    if(root == NULL){
        return ;
    }
    // NLR;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root){
    if(root == NULL){
        return ;
    }
    //LRN;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}



void build_level_order(Node *&root){
    queue<Node*>q;
    int data;
    cout<<"Enter data for  root "<<endl;
    cin>>data;
    root = new Node(data);
    
    
    q.push(root);
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        
        cout<<"Enter data for the left  part :"<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        
        if(leftdata != -1){
            temp->left = new Node(leftdata);
            q.push(temp->left);

        }

        cout<<"Enter data for the right part : "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata != -1){
            temp->right = new Node(rightdata);
            q.push(temp->right);
        }
    }
}





// finding the height of a binary tree :

int height(Node *root){
    if(root == NULL){
        return 0;
    }
    
    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left,right) + 1;

    return ans;
}



int main()
{
    Node *root = NULL;
    //build_level_order(root);
    // buildFromLevelOrder(root);
    root = buildtree(root);
    level_order_traversing(root);

    cout<<height(root)<<endl;


    /*level_order_traversing(root);
    cout<<"Inorder Traversing : "<<endl;
    inorder(root);

    cout<<endl<<"Preorder Traversing : "<<endl;
    preorder(root);

    cout<<endl<<"Postorder Traversing : "<<endl;
    postorder(root);*/
    return 0;
}