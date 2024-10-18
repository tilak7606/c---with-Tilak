#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// like normal binary tree ;
class Node {
    public :
    int data;
    Node *left;
    Node*right;

    Node(int data){
        this -> data = data;
        this ->left = NULL;
        this -> right = NULL;
    }
};

Node *insertBST(Node *root,int d){
    if(root == NULL){
        root = new Node(d);
        return root;
    }

    // agar root se bada hai data toh :
    if(d > root->data){
        // right mai insert kar do :
        root->right = insertBST(root->right,d);

    }
    else{
        // left mai insert kar do :
        root->left = insertBST(root->left,d);
    }
    return root;
}

void insert(Node *&root){
    int data;
    cin>>data;
    while(data != -1){
        root = insertBST(root,data);
        cin>>data;

    }
}


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



bool searchbst(Node *root,int x){
    // base case :
    if(root == NULL)
    return false;
    if(root -> data == x)
    return true;

    // agar data bada hai toh :
    if(root->data < x){
        return searchbst(root->right,x);
    }
    else{
        return searchbst(root->left,x);
    }
}


bool searchBST(Node *root,int x){
    Node *temp = root;
    while(temp != NULL){
        if(temp ->data== x){
            return true;
        }

        else if(x > temp -> data){
            temp = temp -> right;
        }
        else{
            temp = temp -> left;
        }
    }
    return false;
}


// finding the minimum value :
int minimum(Node *root){

Node *temp = root;
while(temp -> left != NULL){
    temp = temp->left;
}
return temp -> data;
}

// finding the maximum value :
int maximum(Node *root){
    Node *temp = root;
    while(temp -> right != NULL){
        temp = temp->right;
    }
    return temp -> data;
}


Node *deletefromBST(Node *root,int val){
    if(root == NULL) // base case :
    return root;
    // if found :
    if(root -> data == val){
        // 0 child :
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }


        // 1 child :
        // left child :
        if(root->left != NULL && root->right == NULL){
            Node *temp = root -> left;
            delete root;
            return temp;
        }

        // right child :
        if(root->left == NULL && root->right != NULL){
            Node *temp = root->right ;
            delete root;
            return temp;
        }

       // 2 child :
       if(root -> right != NULL && root -> left != NULL){
        int mini = minimum(root->right);
        root->data = mini;
        root->right = deletefromBST(root->right,mini);
        return root;
       }


    }

    else if(root->data > val){
       root -> left = deletefromBST(root->left,val);
        return root;
    }
    else{
        root->right = deletefromBST(root->right,val);
         return root;
    }
}

Node *max(Node *root){              // Morris traversal mai predecessor nikalne ke lia :
    Node *temp = root->left;+
    while(temp->right != NULL && temp->right != root){
        temp =temp -> right;
    }
    return temp;
}



void morris_traversal(Node *root){
    Node *curr = root;
    while(curr != NULL){
        if(curr->left == NULL){
            cout<<curr->data<<" ";
            curr = curr->right;
        }
        else{
            Node * pre = max(curr);
            if(pre -> right == NULL){
                pre->right = curr;
                curr = curr->left;
            }
            else{
                pre->right = NULL;
                cout<<curr->data<<" ";
                curr = curr->right;
            }
        }
    }
}




// 10 8 21 7 27 5 4 3 -1
int main()
{ 
    Node *root = NULL;
    cout<<"insert the elements for BST :"<<endl;

    // insert karva lo data ko :
    insert(root);

    cout<<"level order traversal :"<<endl;
    // level order traversal karlo :
    level_order_traversing(root);
    
    //inorder traversal :
    cout<<"inorder traversal :"<<endl;
    inorder(root);
    // preorder traversal :
    cout<<endl<<"preorder traversal :"<<endl;
    preorder(root);
    
    // postorder traversal :
    cout<<endl<<"postorder traversal :"<<endl;
    postorder(root);
    
    // recursion method :
    if(searchbst(root,21)){
        cout<<endl<<"present : "<<endl;
    }
    else{
        cout<<endl<<"Not present :"<<endl;
    }
    
    // itereative mehtod ;
    if(searchBST(root,21)){
        cout<<"present : "<<endl;
    }
     else{
        cout<<"Not present :"<<endl;
    }

    // minimum value :
    cout<<"The minumum value is = "<<minimum(root)<<endl;

    // maximum value :
    cout<<"The maximum value is = "<<maximum(root)<<endl;

    cout<<"After deletion : "<<endl;
    root = deletefromBST(root,27);
    level_order_traversing(root);
    cout<<endl;
    inorder(root);

    cout<<endl<<"Morris Traversal is : "<<endl;
    morris_traversal(root);




    return 0;
}