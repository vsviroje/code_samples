/*
    Circular linked list is a linked list where all nodes are connected to form a circle. 
    There is no NULL at the end. A circular linked list can be a singly circular linked list or doubly circular linked list.
    Advantages of Circular Linked Lists:
        1) Any node can be a starting point. We can traverse the whole list by starting from any point. We just need to stop when the first visited node is visited again.
        2) Useful for implementation of queue. Unlike this implementation, we don’t need to maintain two pointers for front and rear if we use circular linked list. 
            We can maintain a pointer to the last inserted node and front can always be obtained as next of last.
        3) Circular lists are useful in applications to repeatedly go around the list. For example, when multiple applications are running on a PC, it is common for the operating system to put the running applications on a list and then to cycle through them, giving each of them a slice of time to execute, and then making them wait while the CPU is given to another application. 
            It is convenient for the operating system to use a circular list so that when it reaches the end of the list it can cycle around to the front of the list.
        4) Circular Doubly Linked Lists are used for implementation of advanced data structures like Fibonacci Heap.
    
    Why Circular? In a singly linked list, for accessing any node of the linked list, we start traversing from the first node. 
    If we are at any node in the middle of the list, then it is not possible to access nodes that precede the given node. 
    This problem can be solved by slightly altering the structure of a singly linked list. 
    In a singly linked list, the next part (pointer to next node) is NULL. 
    If we utilize this link to point to the first node, then we can reach the preceding nodes.

    The implementation and insertion of a node in a Circular Linked List using a singly linked list are explained.
    Implementation 
        To implement a circular singly linked list, we take an external pointer that points to the last node of the list. If we have a pointer last pointing to the last node, then last -> next will point to the first node. 
    Why have we taken a pointer that points to the last node instead of the first node? 
        For the insertion of a node at the beginning, we need to traverse the whole list. 
        Also, for insertion at the end, the whole list has to be traversed. 
        If instead of start pointer, we take a pointer to the last node, then in both cases there won’t be any need to traverse the whole list. 
        So insertion at the beginning or at the end takes constant time, irrespective of the length of the list.
    
    Insertion 
        A node can be added in three ways: 
            Insertion in an empty list
            Insertion at the beginning of the list
            Insertion at the end of the list
            Insertion in between the nodes
    Insertion in an empty List 
        Initially, when the list is empty, the last pointer will be NULL.
        After inserting node T, 
        After insertion, T is the last node, so the pointer last points to node T. And Node T is the first and the last node, so T points to itself. 
    Insertion at the beginning of the list 
        1. Create a node, say T. 
        2. Make T -> next = last -> next. 
        3. last -> next = T. 
    Insertion at the end of the list 
        1. Create a node, say T. 
        2. Make T -> next = last -> next; 
        3. last -> next = T. 
        4. last = T.
    Insertion in between the nodes 
        1. Create a node, say T. 
        2. Search for the node after which T needs to be inserted, say that node is P. 
        3. Make T -> next = P -> next; 
        4. P -> next = T.
*/

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

int main(){

    Node* InsertToEmptyLL(Node* ,int );
    Node* InsertAtBeginningLL(Node* ,int );
    Node* InsertAtEndLL(Node*,int);
    Node* InsertAtAfterLL(Node*,int,int);

    void PrintNode(Node* );

    Node* lastNode=NULL;

    lastNode=InsertToEmptyLL(lastNode,1);
    lastNode=InsertAtBeginningLL(lastNode,2);
    lastNode=InsertAtEndLL(lastNode,3);
    
    PrintNode(lastNode->next);

    lastNode=InsertAtAfterLL(lastNode,4,3);
    PrintNode(lastNode->next);

    return 0;
}

Node* InsertToEmptyLL(Node* lastNode,int data){
    if(lastNode!=NULL){
        return lastNode;//LL was supposed to empty
    }

    Node* temp=new Node();
    
    temp->data=data;
    temp->next=NULL;

    lastNode=temp; //first and last are same
    temp->next=lastNode;

    return lastNode;
}

void PrintNode(Node* head){
    
    if(head==NULL){
        return;
    }
    int counter=1;

    Node* temp=head;
   
    do{
        
        cout<< "Counter==>" <<counter << " | Data==>" << temp->data << endl;
        temp=temp->next;
        counter++;

    }while(temp!=head);

    cout<<"-------------------"<< endl;
}

Node* InsertAtBeginningLL(Node* lastNode,int data){
    Node* InsertToEmptyLL(Node*,int);

    if(lastNode==NULL){
        return InsertToEmptyLL(lastNode,data);//LL was not supposed to empty
    }

    Node* temp=new Node();
    
    temp->data=data;

    temp->next=lastNode->next;
    lastNode->next=temp;

    return lastNode;
}

Node* InsertAtEndLL(Node* lastNode,int data){
    Node* InsertToEmptyLL(Node*,int);

    if(lastNode==NULL){
        return InsertToEmptyLL(lastNode,data);//LL was not supposed to empty
    }

    Node* temp=new Node();
    
    temp->data=data;

    temp->next=lastNode->next;
    lastNode->next=temp;
    lastNode=temp;

    return lastNode;
}


Node* InsertAtAfterLL(Node* lastNode,int data,int afterData){
    Node* InsertToEmptyLL(Node*,int);

    if(lastNode==NULL){
        return InsertToEmptyLL(lastNode,data);//LL was not supposed to empty
    }

    Node* list=lastNode->next;

    do{
        if(list->data==afterData){
            
            Node* temp=new Node();
            temp->data=data;
            
            temp->next=list->next;
            list->next=temp;

            if(list==lastNode){//while traversing if lastNode occured...need to update the variable
                lastNode=temp;
            }

            return lastNode;
        }
        list=list->next;

    } while(list!=lastNode->next);

    return lastNode;
}
