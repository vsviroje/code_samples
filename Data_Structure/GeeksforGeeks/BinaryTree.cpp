/*
    A tree whose elements have at most 2 children is called a binary tree. Since each element in a binary tree can have only 2 children, we typically name them the left and right child.
    A Binary Tree node contains the following parts.
        Data
        Pointer to left child
        Pointer to right child

    The tree is a hierarchical Data Structure. A binary tree is a tree that has at most two children. 
    The node which is on the left of the Binary Tree is called “Left-Child” and the node which is the right is called “Right-Child”. 
    Also, the smaller tree or the subtree in the left of the root node is called the “Left sub-tree” and that is on the right is called “Right sub-tree”.

    The data structure is a specialized method to organize and store data in the computer to be used more effectively. 
    There are various types of data structures, such as stack, linked list, and queue, arranged in sequential order. 
    For example, a linked data structure consists of a set of nodes that are linked together by links or points.  
    Similarly, the tree data structure is a kind of hierarchal data arranged in a tree-like structure. 
    It consists of a central node, structural nodes, and sub nodes, which are connected via edges. We can also say that tree data structure has roots, branches, and leaves connected with one another.  
    A tree is non-linear and a hierarchical data structure consisting of a collection of nodes such that each node of the tree stores a value, a list of references to nodes (the “children”).

    Basic Terminology In Tree Data Structure:
        Parent Node: The node which is a predecessor of a node is called the parent node of that node.
        Child Node: The node which is the immediate successor of a node is called the child node of that node.
        Root Node: The topmost node of a tree or the node which does not have any parent node is called the root node.A non-empty tree must contain exactly one root node and exactly one path from the root to all other nodes of the tree.
        Degree of a Node: The total count of subtrees attached to that node is called the degree of the node. The degree of a leaf node must be 0. The degree of a tree is the maximum degree of a node among all the nodes in the tree.
        Leaf Node or External Node: The nodes which do not have any child nodes are called leaf nodes.
        Ancestor of a Node: Any predecessor nodes on the path of the root to that node are called Ancestors of that node.
        Descendant: Any successor node on the path from the leaf node to that node.
        Sibling: Children of the same parent node are called siblings.
        Depth of a node: The count of edges from the root to the node.
        Height of a node: The number of edges on the longest path from that node to a leaf.
        Height of a tree: The height of a tree is the height of the root node i.e the count of edges from the root to the deepest node.
        Level of a node: The count of edges on the path from the root node to that node. The root node has level 0.
        Internal node: A node with at least one child is called Internal Node.
        Neighbour of a Node: Parent or child nodes of that node are called neighbors of that node.
        Subtree: Any node of the tree along with its descendant

    Given a binary tree and a key, insert the key into the binary tree at the first position available in level order.

    The idea is to do iterative level order traversal of the given tree using queue. If we find a node whose left child is empty, we make new key as left child of the node. 
    Else if we find a node whose right child is empty, we make the new key as right child. We keep traversing the tree until we find a node whose either left or right child is empty. 

    Why Use Trees? 
        1. One reason to use trees might be because you want to store information that naturally forms a hierarchy. For example, the file system on a computer: 
        2. Trees (with some ordering e.g., BST) provide moderate access/search (quicker than Linked List and slower than arrays). 
        3. Trees provide moderate insertion/deletion (quicker than Arrays and slower than Unordered Linked Lists). 
        4. Like Linked Lists and unlike Arrays, Trees don’t have an upper limit on number of nodes as nodes are linked using pointers.
    
    Main applications of trees include: 
        1. Manipulate hierarchical data. 
        2. Make information easy to search (see tree traversal). 
        3. Manipulate sorted lists of data. 
        4. As a workflow for compositing digital images for visual effects. 
        5. Router algorithms 
        6. Form of a multi-stage decision-making (see business chess). 

    Basic Operation On Binary Tree:
        Inserting an element.
        Removing an element.
        Searching for an element.
        Traversing an element. There are three types of traversals in binary tree which will be discussed ahead.
        Finding the height of the tree
        Find the level of the tree
        Finding the size of the entire tree.

    Applications of Binary Tree:
        In compilers, Expression Trees are used which is an application of binary tree.
        Huffman coding trees are used in data compression algorithms.
        Priority Queue is another application of binary tree that is used for searching maximum or minimum in O(logn) time complexity.

    Binary Tree Traversals:
        PreOrder Traversal: Here, the traversal is : root – left child – right child. It means that the root node is traversed first then its left child and finally the right child.
        InOrder Traversal: Here, the traversal is : left child – root – right child.  It means that the left child is traversed first then its root node and finally the right child.
        PostOrder Traversal: Here, the traversal is : left child – right child – root.  It means that the left child is traversed first then the right child and finally its root node.

    The following are common types of Binary Trees. 
        Full Binary Tree:-
            A Binary Tree is a full binary tree if every node has 0 or 2 children. 
            The following are the examples of a full binary tree. 
            We can also say a full binary tree is a binary tree in which all nodes except leaf nodes have two children. 
            A full Binary tree is a special type of binary tree in which every parent node/internal node has either two or no children. 
            It is also known as a proper binary tree.
    
        Complete Binary Tree:-
            A Binary Tree is a Complete Binary Tree if all the levels are completely filled except possibly the last level and the last level has all keys as left as possible.
            A complete binary tree is just like a full binary tree, but with two major differences:
                Every level must be completely filled
                All the leaf elements must lean towards the left.
                The last leaf element might not have a right sibling i.e. a complete binary tree doesn’t have to be a full binary tree.
                The following are examples of Complete Binary Trees.
            Practical example of Complete Binary Tree is Binary Heap. 

        Perfect Binary Tree:-
            A Binary tree is a Perfect Binary Tree in which all the internal nodes have two children and all leaf nodes are at the same level. 
            The following are the examples of Perfect Binary Trees. 
            A perfect binary tree is a type of binary tree in which every internal node has exactly two child nodes and all the leaf nodes are at the same level.
            In a Perfect Binary Tree, the number of leaf nodes is the number of internal nodes plus 1   
            L = I + 1 Where L = Number of leaf nodes, I = Number of internal nodes.
            A Perfect Binary Tree of height h (where the height of the binary tree is the number of edges in the longest path from the root node to any leaf node in the tree, height of root node is 0) has 2^h+1 – 1 node. 
            An example of a Perfect binary tree is ancestors in the family. Keep a person at root, parents as children, parents of parents as their children.

        Balanced Binary Tree:-
            A binary tree is balanced if the height of the tree is O(Log n) where n is the number of nodes. 
            For Example, the AVL tree maintains O(Log n) height by making sure that the difference between the heights of the left and right subtrees is at most 1. 
            Red-Black trees maintain O(Log n) height by making sure that the number of Black nodes on every root to leaf paths is the same and there are no adjacent red nodes. 
            Balanced Binary Search trees are performance-wise good as they provide O(log n) time for search, insert and delete. 
            It is a type of binary tree in which the difference between the height of the left and the right subtree for each node is either 0 or 1.

        A degenerate (or pathological) tree:-
            A Tree where every internal node has one child. Such trees are performance-wise same as linked list. 
            A degenerate or pathological tree is the tree having a single child either left or right.

        Skewed Binary Tree:-
            A skewed binary tree is a pathological/degenerate tree in which the tree is either dominated by the left nodes or the right nodes. 
            Thus, there are two types of skewed binary tree: left-skewed binary tree and right-skewed binary tree.
        
    Given a binary tree, delete a node from it by making sure that the tree shrinks from the bottom (i.e. the deleted node is replaced by the bottom-most and rightmost node)
    Algorithm to delete node in binary tree
        1. Starting at the root, find the deepest and rightmost node in the binary tree and the node which we want to delete. 
        2. Replace the deepest rightmost node’s data with the node to be deleted. 
        3. Then delete the deepest rightmost node.
        

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
    Node* CreateBinaryTree();
    void InsertNode(Node**,int);
    void Inorder(Node*);
    void Preorder(Node*);
    void Postorder(Node*);
    void DeleteNode(Node**,int);


    cout<<"Note:enter -1 to end"<<endl;
    Node* root=CreateBinaryTree();
    Inorder(root);
    cout<<endl;

    InsertNode(&root,10);
    Inorder(root);
    cout<<endl;

    cout<<endl<<"Inorder"<<endl;
    Inorder(root);

    cout<<endl<<"Preorder"<<endl;
    Preorder(root);

    cout<<endl<<"Postorder"<<endl;
    Postorder(root);

    DeleteNode(&root,10);
    cout<<endl<<"------after delete---------"<<endl;
    cout<<endl<<"Inorder"<<endl;
    Inorder(root);
    cout<<endl<<"Preorder"<<endl;
    Preorder(root);
    cout<<endl<<"Postorder"<<endl;
    Postorder(root);

    return(0);
}

Node* CreateBinaryTree(){
    Node* GetNewNode(int);

    int data=0;

    cout<<"Enter data:";
    cin>>data;

    if(data==-1){
        return NULL;//"Note:enter -1 to end"
    }

    Node* temp=GetNewNode(data);

    cout<<endl<<"Enter left node of "<<data<<endl;
    temp->left=CreateBinaryTree();

    cout<<endl<<"Enter right node of "<<data<<endl;
    temp->right=CreateBinaryTree();

    return temp; 
}

void InsertNode(Node** root,int data){
    Node* GetNewNode(int);

    if((*root)==NULL){
        (*root)=GetNewNode(data);
        return;
    }

    queue<Node*>q;

    q.push((*root));

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        if(temp->left!=NULL){
            q.push(temp->left);
        }else{
            temp->left=GetNewNode(data);
            return;
        }

        if(temp->right!=NULL){
            q.push(temp->right);
        }else{
            temp->right=GetNewNode(data);
            return;
        }
    }
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

Node* GetNewNode(int data){
    Node* temp=new Node();

    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}


void DeleteNode(Node** root,int dataToDelete){

    if((*root)==NULL){
        return;
    }

    queue<Node*>q;
    Node* last=NULL;
    Node* keyNode=NULL;
    Node* temp=NULL;

    q.push((*root));

    while(!q.empty()){
        temp=q.front();
        q.pop();

        if(temp->data==dataToDelete){
            keyNode=temp;
        }

        if(temp->left!=NULL){
            last=temp; 
            q.push(temp->left);
        }

        if(temp->right!=NULL){
            last=temp;
            q.push(temp->right);
        }
        
        //last=temp;...it will give last node through queue...which we dont want
    }

    if(last!=NULL){
        cout<<endl;
        cout<<"last!=NULL"<<endl;
        
        cout<<"last->data:"<<last->data<<endl;

        cout<<"last->right!=NULL:"<<(last->right!=NULL)<<endl;
        cout<<"last->left!=NULL:"<<(last->left!=NULL)<<endl;
    }

    if(keyNode!=NULL){
        cout<<"keyNode->data:"<<keyNode->data<<endl;
        cout<<"temp->data:"<<temp->data<<endl;

        keyNode->data=temp->data;//replacing key_node's data to deepest node's data
        
        if(last->right!=NULL){
            last->right=NULL;
        }else{
            last->left=NULL;
        }

        delete temp;
    }

}