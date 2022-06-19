/*
    Deque or Double Ended Queue is a generalized version of Queue data structure that allows insert and delete at both ends.
    Operations on Deque: Mainly the following four basic operations are performed on queue:
        insertFront(): Adds an item at the front of Deque.
        insertLast(): Adds an item at the rear of Deque.
        deleteFront(): Deletes an item from the front of Deque.
        deleteLast(): Deletes an item from the rear of Deque. In addition to the above operations, the following operations are also supported.
        getFront(): Gets the front item from the queue.
        getRear(): Gets the last item from queue.
        isEmpty(): Checks whether Deque is empty or not.
        isFull(): Checks whether Deque is full or not.

    Applications of Deque: 
        Since Deque supports both stack and queue operations, it can be used as both. 
        The Deque data structure supports clockwise and anticlockwise rotations in O(1) time which can be useful in certain applications. 
        Also, the problems where elements need to be removed and or added to both ends can be efficiently solved using Deque. 

    Some Practical Applications of Deque:
        Storing a web browser’s history.
        Storing a software application’s list of undo operations.
        Job scheduling algorithm
    
    For implementing deque, we need to keep track of two pointers, front and rear. We enqueue (push) an item at the rear or the front end of deque and dequeue(pop) an item from both rear and front end.
    Working : 
    Declare two pointers front and rear of type Node, where Node represents the structure of a node of a doubly linked list. Initialize both of them with value NULL.

    Insertion at Front end : 
        1. Allocate space for a newNode of doubly linked list.
        2. IF newNode == NULL, then
        3.     print "Overflow"
        4. ELSE
        5.     IF front == NULL, then
        6.         rear = front = newNode
        7.     ELSE
        8.         newNode->next = front
        9.       front->prev = newNode
        10.        front = newNode
    
    Insertion at Rear end : 
        1. Allocate space for a newNode of doubly linked list.
        2. IF newNode == NULL, then
        3.     print "Overflow"
        4. ELSE
        5.     IF rear == NULL, then
        6.         front = rear = newNode
        7.     ELSE
        8.         newNode->prev = rear
        9.       rear->next = newNode
        10.        rear = newNode
    
    Deletion from Front end : 
        1. IF front == NULL
        2.     print "Underflow"
        3. ELSE
        4.     Initialize temp = front
        5.     front = front->next
        6.     IF front == NULL
        7.         rear = NULL
        8.     ELSE
        9.         front->prev = NULL
        10     Deallocate space for temp
    
    Deletion from Rear end : 
        1. IF front == NULL
        2.     print "Underflow"
        3. ELSE
        4.     Initialize temp = rear
        5.     rear = rear->prev
        6.     IF rear == NULL
        7.         front = NULL
        8.     ELSE
        9.         rear->next = NULL
        10     Deallocate space for temp

*/

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;
};

class Queue{
    public:
        Node* front;
        Node* rear;
};

int main(){
    void InsertAtFrontEnd(Queue**,int);
    void InsertAtRearEnd(Queue**,int);
    void DeleteAtFrontEnd(Queue**);
    void DeleteAtRearEnd(Queue**);
    void PrintNode(Queue*);

    Queue* q=new Queue();

    InsertAtFrontEnd(&q,1);
    InsertAtFrontEnd(&q,2);
    InsertAtRearEnd(&q,3);
    InsertAtRearEnd(&q,4);
    InsertAtFrontEnd(&q,5);
    InsertAtFrontEnd(&q,6);
    InsertAtRearEnd(&q,7);
    InsertAtRearEnd(&q,8);

    PrintNode(q);

    DeleteAtFrontEnd(&q);
    DeleteAtFrontEnd(&q);
    PrintNode(q);

    DeleteAtRearEnd(&q);
    DeleteAtRearEnd(&q);
    PrintNode(q);

    return(0);
}

void InsertAtFrontEnd(Queue** queue,int data){
    Node* GetNewNode(int);

    Node* newNode=GetNewNode(data);

    if((*queue)->front==NULL){
        (*queue)->rear=(*queue)->front=newNode;
        return;
    }

    newNode->next=(*queue)->front;
    (*queue)->front->prev=newNode;
    (*queue)->front=newNode;
}

void InsertAtRearEnd(Queue** queue,int data){
    Node* GetNewNode(int);

    Node* newNode=GetNewNode(data);

    if((*queue)->rear==NULL){
        (*queue)->rear=(*queue)->front=newNode;
        return;
    }

    newNode->prev=(*queue)->rear;
    (*queue)->rear->next=newNode;
    (*queue)->rear=newNode;
}

void DeleteAtFrontEnd(Queue** queue){

    if((*queue)->front==NULL){
        (*queue)->rear=NULL;
        return;
    }

    Node* deleteNode=(*queue)->front;

    (*queue)->front=(*queue)->front->next;

    if((*queue)->front==NULL){
        (*queue)->rear=NULL;
    }else{
        (*queue)->front->prev=NULL;
    }

    cout<<"deleteNode->Data:"<<deleteNode->data<< endl;
    delete deleteNode;
}

void DeleteAtRearEnd(Queue** queue){

    if((*queue)->rear==NULL){
        (*queue)->front=NULL;
        return;
    }

    Node* deleteNode=(*queue)->rear;

    (*queue)->rear=(*queue)->rear->prev;

    if((*queue)->rear==NULL){
        (*queue)->front=NULL;
    }else{
        (*queue)->rear->next=NULL;
    }

    cout<<"deleteNode->Data:"<<deleteNode->data<< endl;
    delete deleteNode;
}



Node* GetNewNode(int data){
    Node* temp=new Node();

    temp->data=data;
    temp->next=NULL;
    temp->prev=NULL;

    return temp;
}

void PrintNode(Queue* queue){
    Node* temp=queue->front;
    cout<<"----Front---------"<< endl;
    int counter=1;
    while(temp!=NULL){
        cout<<counter << "==>" << temp->data << endl;
        temp=temp->next;
        counter++;
    }
    cout<<"----Revert---------"<< endl;
    temp=queue->rear;
    counter=1;
    while(temp!=NULL){
        cout<<counter << "==>" << temp->data << endl;
        temp=temp->prev;
        counter++;
    }
    cout<<"-------------------"<< endl;
}