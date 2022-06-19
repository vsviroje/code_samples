/*
    Circular Queue is a linear data structure in which the operations are performed based on FIFO (First In First Out) principle and the last position is connected back to the first position to make a circle. 
    It is also called ‘Ring Buffer’.

    Operations on Circular Queue:
        Front:Get the front item from queue.
        Rear: Get the last item from queue.
        enQueue(value) This function is used to insert an element into the circular queue. In a circular queue, the new element is always inserted at Rear position.
            Steps:
                Create a new node dynamically and insert value into it.
                Check if front==NULL, if it is true then front = rear = (newly created node)
                If it is false then rear=(newly created node) and rear node always contains the address of the front node.
        deQueue() This function is used to delete an element from the circular queue. In a queue, the element is always deleted from front position.
            Steps:
                Check whether queue is empty or not means front == NULL.
                If it is empty then display Queue is empty. If queue is not empty then step 3
                Check if (front==rear) if it is true then set front = rear = NULL else move the front forward in queue, update address of front in rear node and return the element. 

*/

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

class Queue{
    public:
        Node* front;
        Node* rear;
};

int main(){
    void EnQueue(Queue** ,int );
    void DeQueue(Queue** );
    void PrintNode(Queue* );

    Queue* q=new Queue();
    
    EnQueue(&q,1);
    EnQueue(&q,2);
    EnQueue(&q,3);
    EnQueue(&q,4);
    EnQueue(&q,5);    
    PrintNode(q);

    DeQueue(&q);
    DeQueue(&q);
    PrintNode(q);

    EnQueue(&q,1);
    EnQueue(&q,2);    
    PrintNode(q);

    return(0);
}

void EnQueue(Queue** queue,int data){
    Node* GetNewNode(int);

    Node* newNode=GetNewNode(data);

    if((*queue)->front==NULL){
        (*queue)->front=newNode;
    }else{
        (*queue)->rear->next=newNode;
    }

    (*queue)->rear=newNode;
    (*queue)->rear->next=(*queue)->front;
}

void DeQueue(Queue** queue){
    if((*queue)->front==NULL){
        cout<<"queue is already empty...!!!"<<endl;
        return;
    }

    Node* deleteNode=(*queue)->front;

    cout<<"deleteNode Data:"<<deleteNode->data<<endl;
    if(deleteNode==(*queue)->rear){
        (*queue)->front=NULL;
        (*queue)->rear=NULL;
        return;
    }

    (*queue)->front=(*queue)->front->next;
    (*queue)->rear->next=(*queue)->front;

    delete deleteNode;
}


Node* GetNewNode(int data){
    Node* temp=new Node();

    temp->data=data;
    temp->next=NULL;
    return temp;
}

void PrintNode(Queue* queue){
    Node* temp=queue->front;

    if(temp==NULL){
        cout<<"queue is already empty...!!!"<<endl;
        return;
    }

    int counter=1;
    do{
        cout<<counter << "==>" << temp->data << endl;
        temp=temp->next;
        counter++;
    }while(temp!=queue->front);
    cout<<"-------------------"<< endl;
}