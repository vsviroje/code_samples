/*
    Stack is a linear data structure which follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out).
    
    There are many real-life examples of a stack. Consider an example of plates stacked over one another in the canteen. 
    The plate which is at the top is the first one to be removed, i.e. the plate which has been placed at the bottommost position remains in the stack for the longest period of time.

    The plate which we put last is on the top and since we remove the plate that is at the top, we can say that the plate that was put last comes out first. 
    Some of its main operations are: push(), pop(), top(), isEmpty(), size(), etc.  
    In order to make manipulations in a stack, there are certain operations provided to us. 
    When we want to insert an element into the stack the operation is known as the push operation whereas when we want to remove an element from the stack the operation is known as the pop operation. 
    If we try to pop from an empty stack then it is known as underflow and if we try to push an element in a stack that is already full, then it is known as overflow.

    Algorithm for push:
        begin
        if stack is full
            return
        endif
        else  
            increment top
            stack[top] assign value
        end else
        end procedure
    
    Algorithm for pop:
        begin
        if stack is empty
            return
            endif
        else
            store value of stack[top]
            decrement top
            return value
        end else
        end procedure
    
    Algorithm for peek:
        begin 
            return stack[top]
        end procedure
    
    Algorithm for isEmpty:
        begin
        if top < 1
            return true
        else
            return false
        end procedure
 
    Types of Stacks:
        Register Stack: This type of stack is also a memory element present in the memory unit and can handle a small amount of data only. 
                        The height of the register stack is always limited as the size of the register stack is very small compared to the memory.

        Memory Stack:   This type of stack can handle a large amount of memory data. 
                        The height of the memory stack is flexible as it occupies a large amount of memory data. 
    
    Implementation: 
        There are two ways to implement a stack: 
            Using array
            Using linked list
    
    Applications of the stack:
        Balancing of symbols
        Infix to Postfix /Prefix conversion
        Redo-undo features at many places like editors, photoshop.
        Forward and backward features in web browsers
        Used in many algorithms like Tower of Hanoi, tree traversals, stock span problems, and histogram problems.
        Backtracking is one of the algorithm designing techniques. Some examples of backtracking are the Knight-Tour problem, N-Queen problem, find your way through a maze, and game-like chess or checkers in all these problems we dive into someway if that way is not efficient we come back to the previous state and go into some another path. To get back from a current state we need to store the previous state for that purpose we need a stack.
        In Graph Algorithms like Topological Sorting and Strongly Connected Components
        In Memory management, any modern computer uses a stack as the primary management for a running purpose. Each program that is running in a computer system has its own memory allocations
        String reversal is also another application of stack. Here one by one each character gets inserted into the stack. So the first character of the string is on the bottom of the stack and the last element of a string is on the top of the stack. After Performing the pop operations on the stack we get a string in reverse order.

    Advantages of Stack:
        The linked list implementation of a stack can grow and shrink according to the needs at runtime.
        It is used in many virtual machines like JVM.
        Stacks are more secure and reliable as they do not get corrupted easily.
        Stack cleans up the objects automatically.

    Disadvantages of Stack:                                                                                                              ```````````````````
        Requires extra memory due to involvement of pointers.
        Random accessing is not possible in stack.
        The total of size of the stack must be defined before.
        If the stack falls outside the memory it can lead to abnormal termination.
*/

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

int main(){
    void PrintNode(Node* temp);
    void Push(Node** head,int data);
    void Pop(Node** head);
    int Top(Node** head);

    Node* head=NULL;

    Push(&head,1);
    Push(&head,2);
    Push(&head,3);
    Push(&head,4);
    PrintNode(head);
    cout<<Top(&head)<<endl;

    Pop(&head);
    Pop(&head);
    Pop(&head);
    Pop(&head);
    Pop(&head);
    PrintNode(head);
    cout<<Top(&head)<<endl;

    Push(&head,4);
    PrintNode(head);
    cout<<Top(&head)<<endl;

    return(0);
}

Node* GetNewNode(int data){
    Node* temp=new Node();

    temp->data=data;
    temp->next=NULL;
    return temp;
}

int IsEmpty(Node** head){
    if ((*head)!=NULL){
        return 0;
    }

    cout<<"stack already empty"<<endl;
    return 1;
}

void Push(Node** head,int data){
    Node* GetNewNode(int);

    Node* newNode=GetNewNode(data);

    newNode->next=(*head);
    (*head)=newNode;
}

void Pop(Node** head){
    int IsEmpty(Node**);

    if(IsEmpty(head)){
        return;
    }

    Node* deleteMe=(*head);
    (*head)=(*head)->next;

    cout<<"Poped:"<<deleteMe->data<<endl;
    delete deleteMe;
}

int Top(Node** head){
    int IsEmpty(Node**);
    if(IsEmpty(head)){
        return -1;
    }
    return (*head)->data;
}

void PrintNode(Node* temp){
    int counter=1;
    while(temp!=NULL){
        cout<<counter << "==>" << temp->data << endl;
        temp=temp->next;
        counter++;
    }
    cout<<"-------------------"<< endl;
}
