/*
    A Queue is a linear structure which follows a particular order in which the operations are performed. 
    The order is First In First Out (FIFO). A good example of a queue is any queue of consumers for a resource where the consumer that came first is served first.
    The difference between stacks and queues is in removing. In a stack we remove the item the most recently added; in a queue, we remove the item the least recently added.

    One can imagine a queue as a line of people waiting to receive something in sequential order which starts from the beginning of the line. 
    It is an ordered list in which insertions are done at one end which is known as the rear and deletions are done from the other end known as the front.

    Basic Operations on Queue: 
        enqueue(int data): Inserts an element at the end of the queue i.e. at the rear end.
        dequeue(): This operation removes and returns an element that is at the front end of the queue.

    Auxiliary Operations on Queue:
        int front(): This operation returns the element at the front end without removing it.
        int rear(): This operation returns the element at the rear end without removing it.
        int isEmpty(): This operation indicates whether the queue is empty or not.
        int size(): This operation returns the size of the queue i.e. the total number of elements it contains. 

    Types of Queues: 
        Simple Queue:       Simple queue also known as a linear queue is the most basic version of a queue. 
                            Here, insertion of an element i.e. the Enqueue operation takes place at the rear end and removal of an element i.e. the Dequeue operation takes place at the front end.
        
        Circular Queue:     In a circular queue, the element of the queue act as a circular ring. 
                            The working of a circular queue is similar to the linear queue except for the fact that the last element is connected to the first element. 
                            Its advantage is that the memory is utilized in a better way. 
                            This is because if there is an empty space i.e. if no element is present at a certain position in the queue, then an element can be easily added at that position.
        
        Priority Queue:     This queue is a special type of queue. 
                            Its specialty is that it arranges the elements in a queue based on some priority. 
                            The priority can be something where the element with the highest value has the priority so it creates a queue with decreasing order of values. 
                            The priority can also be such that the element with the lowest value gets the highest priority so in turn it creates a queue with increasing order of values.
        
        Dequeue:            Dequeue is also known as Double Ended Queue. 
                            As the name suggests double ended, it means that an element can be inserted or removed from both the ends of the queue unlike the other queues in which it can be done only from one end. 
                            Because of this property it may not obey the First In First Out property.

        enQueue() This operation adds a new node after rear and moves rear to the next node.
        deQueue() This operation removes the front node and moves front to the next node.

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

    if((*queue)->rear==NULL){
        (*queue)->front=(*queue)->rear=newNode;
        return;
    }

    (*queue)->rear->next=newNode;
    (*queue)->rear=newNode;

}

void DeQueue(Queue** queue){
    Node* GetNewNode(int);

    if((*queue)->front==NULL){
        return;
    }

    Node* deleteNode=(*queue)->front;
    (*queue)->front=deleteNode->next;

    if((*queue)->front==NULL){
        (*queue)->rear=NULL;
    }

    cout<<"DeQueued:"<<deleteNode->data<<endl;
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

    int counter=1;
    while(temp!=NULL){
        cout<<counter << "==>" << temp->data << endl;
        temp=temp->next;
        counter++;
    }
    cout<<"-------------------"<< endl;
}