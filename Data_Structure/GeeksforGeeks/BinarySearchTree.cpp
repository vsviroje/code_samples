/*
    Binary Search Tree is a node-based binary tree data structure which has the following properties:  
        The left subtree of a node contains only nodes with keys lesser than the node’s key.
        The right subtree of a node contains only nodes with keys greater than the node’s key.
        The left and right subtree each must also be a binary search tree. 
        There must be no duplicate nodes.

    The above properties of Binary Search Tree provides an ordering among keys so that the operations like search, minimum and maximum can be done fast. 
    If there is no ordering, then we may have to compare every key to search for a given key.


    Handling approach for Duplicate values in the Binary Search tree:
        You can not allow the duplicated values at all.
        We must follow a consistent process throughout i.e either store duplicate value at the left or store the duplicate value at the right of the root, but be consistent with your approach.
        We can keep the counter with the node and if we found the duplicate value, then we can increment the counter.

    Operations that can be performed on a BST:
        Insert a node into a BST: A new key is always inserted at the leaf. Start searching a key from the root till a leaf node. Once a leaf node is found, the new node is added as a child of the leaf node.
        Inorder traversal: In case of binary search trees (BST), Inorder traversal gives nodes in non-decreasing order. We visit the left child first, then the root, and then the right child.
        Preorder traversal: Preorder traversal first visits the root node and then traverses the left and the right subtree. It is used to create a copy of the tree. Preorder traversal is also used to get prefix expression on of an expression tree.
        Postorder traversal: Postorder traversal first traverses the left and the right subtree and then visits the root node. It is used to delete the tree. In simple words, visit the root of every subtree last.
        Delete a Node of BST: It is used to delete a node with specific key from the BST and return the new BST.
            Different scenarios for deleting the node:
                Node to be deleted is the leaf node : 
                    Its simple you can just null it out.
                Node to be deleted has one child : 
                    You can just replace the node with the child node.
                Node to be deleted has two child :
                    Need to figure out what will be the replacement of the node to be deleted.
                    Want minimal disruption to the existing tree structure
                    Can table the replacement node from the deleted nodes left or right subtree.
                    If taking if from the left subtree, we have to take the largest value in the left subtree.
                    If taking if from the right subtree, we have to take the smallest value in the right subtree.
                    Choose one approach and stick to it. 


*/

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
};

int main(){
    void Inorder(Node*);
    void Preorder(Node*);
    void Postorder(Node*);
    void InsertNode(Node**,int);
    void DeleteNode(Node** root,int data);

    int arr[] = { 50,30,20,40,70,60};
    int arrSize =sizeof(arr)/sizeof(arr[0]);
    Node* root=NULL;
    for(int i=0;i<arrSize;i++){
        InsertNode(&root,arr[i]);
    }

    cout<<endl<<"Inorder"<<endl;
    Inorder(root);
    cout<<endl<<"Preorder"<<endl;
    Preorder(root);
    cout<<endl<<"Postorder"<<endl;
    Postorder(root);

    cout<<endl<<"After delete"<<endl;
    DeleteNode(&root,70);
    cout<<endl<<"Inorder"<<endl;
    Inorder(root);
    cout<<endl<<"Preorder"<<endl;
    Preorder(root);
    cout<<endl<<"Postorder"<<endl;
    Postorder(root);

    return(0);
}

void InsertNode(Node** root,int data){
    Node* GetNewNode(int);

    Node* temp=(*root);
    Node* prev=NULL;
    Node* newNode=GetNewNode(data);

    while (temp!=NULL){
        prev=temp;

        if(data > temp->data){
            temp=temp->right;
        }else{
            temp=temp->left;
        }
    }


    if(prev==NULL){
        (*root)=newNode;
    }else if(data > prev->data){
        prev->right=newNode;
    }else{
        prev->left=newNode;
    }
}


Node* GetNewNode(int data){
    Node* temp=new Node();

    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}


void Inorder(Node* temp){
    if(temp==NULL){
        return;
    }

    Inorder(temp->left);
    cout<<"->"<<temp->data;
    Inorder(temp->right);
}

void Preorder(Node* temp){
    if(temp==NULL){
        return;
    }

    cout<<"->"<<temp->data;
    Preorder(temp->left);
    Preorder(temp->right);
}

void Postorder(Node* temp){
    if(temp==NULL){
        return;
    }

    Postorder(temp->left);
    Postorder(temp->right);
    cout<<"->"<<temp->data;
}

void DeleteNode(Node** root,int data){

    Node* curr=(*root);
    Node* prev=NULL;
    Node* deleteNode=NULL;
    Node* temp=NULL;

    // Check if the key is actually
    // present in the BST.
    // the variable prev points to
    // the parent of the key to be deleted.
    while (curr!=NULL && curr->data!= data){
        prev=curr;

        if(data < curr->data){
            curr=curr->left;
        }else{
            curr=curr->right;
        }
    }

    if(curr==NULL){
        cout<<endl<<"Data not found to be deleted:"<<data<<endl;
        return;
    }

    // Check if the node to be
    // deleted has atmost one child.
    if(curr->left==NULL || curr->right==NULL){
        
        deleteNode = curr;

        // temp will replace
        // the node to be deleted.

        // if the left child does not exist.
        if(deleteNode->left==NULL){
            temp=deleteNode->right;
        }else{
            temp=deleteNode->left;
        }

        // check if the node to
        // be deleted is the root.
        if(prev==NULL){
            (*root)=temp;
            return;
        }

        // check if the node to be deleted
        // is prev's left or right child
        // and then replace this with temp
        if(deleteNode==prev->left){
            prev->left=temp;
        }else{
            prev->right=temp;
        }

    }else{  // node to be deleted has two children.
        
        // Compute the inorder successor
        temp=curr->right;
        Node* p=NULL;

        while(temp->left!=NULL){
            p=temp;
            temp=temp->left;
        }

        deleteNode = temp;

        // check if the parent of the inorder
        // successor is the curr or not(i.e. curr=
        // the node which has the same data as
        // the given data by the user to be
        // deleted). if it isn't, then make the
        // the left child of its parent equal to
        // the inorder successor'd right child.
        if(p!=NULL){
            p->left=deleteNode->right;
        }else{// if the inorder successor was the curr (i.e. curr = the node which has the same data as the given data by the user to be deleted), then make the right child of the node to be deleted equal to the right child of the inorder successor.
            curr->right=deleteNode->right;
        }

        curr->data=deleteNode->data;

    }

    free(deleteNode);

    return;
}
