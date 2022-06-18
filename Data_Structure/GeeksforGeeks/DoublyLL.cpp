/*
    A Doubly Linked List (DLL) contains an extra pointer, typically called previous pointer, together with next pointer and data which are there in singly linked list.

    Advantages over singly linked list 
        1) A DLL can be traversed in both forward and backward direction. 
        2) The delete operation in DLL is more efficient if pointer to the node to be deleted is given. 
        3) We can quickly insert a new node before a given node. 
        In singly linked list, to delete a node, pointer to the previous node is needed. To get this previous node, sometimes the list is traversed. In DLL, we can get the previous node using previous pointer. 
 
    Disadvantages over singly linked list 
        1) Every node of DLL Require extra space for an previous pointer.
        2) All operations require an extra pointer previous to be maintained. For example, in insertion, we need to modify previous pointers together with next pointers. 
        
    Insertion 
        A node can be added in four ways 
            1) At the front of the DLL 
            2) After a given node. 
            3) At the end of the DLL 
            4) Before a given node.

        1) Add a node at the front:
            The new node is always added before the head of the given Linked List. And newly added node becomes the new head of DLL.
            1. allocate node 
            2. put in the data
            3. Make next of new node as head and previous as NULL
            4. change prev of head node to new node
            5. move the head to point to the new node

        2) Add a node after a given node:
            We are given pointer to a node as prev_node, and the new node is inserted after the given node.
            1. check if the given prev_node is NULL
            2. allocate new node
            3. put in the data
            4. Make next of new node as next of prev_node
            5. Make the next of prev_node as new_node
            6. Make prev_node as previous of new_node
            7. Change previous of new_node's next node

        3) Add a node at the end:
            The new node is always added after the last node of the given Linked List. 
            Since a Linked List is typically represented by the head of it, we have to traverse the list till end and then change the next of last node to new node.
            1. allocate node
            2. put in the data
            3. This new node is going to be the last node, so make next of it as NULL
            4. If the Linked List is empty, then make the new node as head
            5. Else traverse till the last node
            6. Change the next of last node
            7. Make last node as previous of new node

        4) Add a node before a given node: 
            Let the pointer to this given node be next_node and the data of the new node to be added as new_data. 
            1.Check if the next_node is NULL or not. If it’s NULL, return from the function because any new node can not be added before a NULL
            2.Allocate memory for the new node, let it be called new_node
            3.Set new_node->data = new_data
            4.Set the previous pointer of this new_node as the previous node of the next_node, new_node->prev = next_node->prev
            5.Set the previous pointer of the next_node as the new_node, next_node->prev = new_node
            6.Set the next pointer of this new_node as the next_node, new_node->next = next_node;
            7.If the previous node of the new_node is not NULL, then set the next pointer of this previous node as new_node, new_node->prev->next = new_node
            8.Else, if the prev of new_node is NULL, it will be the new head node. So, make (*head_ref) = new_node.
            
        Applications of Doubly Linked List:
            Doubly linked list can be used in navigation systems where both forward and backward traversal is required.
            It can be used to implement different tree data structures.
            It can be used to implement undo/redo operations.

        Real-Time Applications of Doubly Linked List:
            Doubly linked lists are used in web page navigation in both forward and backward directions.
            It can be used in games like a deck of cards.

        Delete Node:
        Algorithm
            If the node temp which we want to delete is NULL or the head is NULL, we will simply return.
            Then we will check if temp is a head node or not.
            If temp is the head node, then we will move head to head→next.
            If the prev of temp is not NULL, we will change the prev of the next of temp to the prev of temp.
            If the next of temp is not NULL, we will change the next of the prev of temp to the next of temp.
            Finally, we will free the space allocated to the temp.
            After all the above steps, the node temp will be deleted from the Doubly Linked List.

*/

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

};

int main(){
    void InsertAtFirst(Node**,int);
    void PrintNode(Node*);
    void InsertAfter(Node*,int);
    void InsertAtEnd(Node**,int);
    void PrintNodeInReverse(Node*);
    void InsertBefore(Node*,int);
    void DeleteNode(Node**,int);

    Node* head=NULL;

    InsertAtFirst(&head,1);
    InsertAtFirst(&head,2);
    InsertAtFirst(&head,3);
    // PrintNode(head);
    
    InsertAfter(head->next,4);
    InsertAfter(head->next->next->next,5);
    // PrintNode(head);
    
    InsertAtEnd(&head,6);
    InsertAtEnd(&head,8);
    // PrintNode(head);

    InsertBefore(head->next->next,7);
    PrintNode(head);
    PrintNodeInReverse(head);

    DeleteNode(&head,3);
    PrintNode(head);
    PrintNodeInReverse(head);

    return 0;
}

void InsertAtFirst(Node** head,int data){
    Node* newData=new Node();

    newData->data=data;

    newData->next=(*head);
    newData->prev=NULL;

    if((*head)!=NULL){
        (*head)->prev=newData;
    }
    
    (*head)=newData;
}

void PrintNode(Node* temp){
    cout<<"--------Straight-----------"<< endl;
    int counter=1;
    while(temp!=NULL){
        cout<<counter << "==>" << temp->data << endl;
        temp=temp->next;
        counter++;
    }
}

void PrintNodeInReverse(Node* temp){
    cout<<"--------Reverse-----------"<< endl;
    int counter=1;
    
    while(temp->next!=NULL){
        temp=temp->next;
    }

    while(temp!=NULL){
        cout<<counter << "==>" << temp->data << endl;
        temp=temp->prev;
        counter++;
    }

}

void InsertAfter(Node* prevNode,int data){
    Node* newData=new Node();

    if(prevNode==NULL){
        cout<<"prevNode can not be null"<<endl;
        return;
    }

    newData->data=data;

    newData->next=prevNode->next;
    newData->prev=prevNode;

    prevNode->next=newData;

    if(newData->next!=NULL){
        newData->next->prev=newData;
    }

}

void InsertAtEnd(Node** head,int data){
    
    Node* newData=new Node();
    Node* temp=(*head);

    newData->data=data;

    newData->next=NULL;
    newData->prev=NULL;

    if(temp==NULL){
        (*head)=newData;
        return;
    }

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=newData;
    newData->prev=temp;

}

void InsertBefore(Node* afterNode,int data){
    Node* newData=new Node();

    if(afterNode==NULL){
        cout<<"afterNode can not be null"<<endl;
        return;
    }

    newData->data=data;

    newData->next=afterNode;
    newData->prev=afterNode->prev;

    afterNode->prev=newData;

    if(newData->prev!=NULL){
        newData->prev->next=newData;
    }else{
        afterNode=newData;//because it will be head node..need testing
    }

}

void DeleteNode(Node** head,int toBeDeleteddata){
    
    Node* temp=(*head);
    Node* deleteNode=NULL;

    while(temp!=NULL){
        
        if(temp->data==toBeDeleteddata){
            deleteNode=temp;
            
            if(temp==(*head)){
                temp->next->prev=NULL;
                (*head)=temp->next;
            } 
            
            if(temp->prev!=NULL){
                temp->prev->next=temp->next;
            }
            
            if(temp->next!=NULL){
                temp->next->prev=temp->prev;
            }

            delete deleteNode;
            break;
        }

        temp=temp->next;
    }

}