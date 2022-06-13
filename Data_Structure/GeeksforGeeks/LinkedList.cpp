/*
    Linked List is a linear data structure. Unlike arrays, linked list elements are not stored at a contiguous location; the elements are linked using pointers.
    
    Why Linked List? 
    Arrays can be used to store linear data of similar types, but arrays have the following limitations. 
    1) The size of the arrays is fixed: So we must know the upper limit on the number of elements in advance. Also, generally, the allocated memory is equal to the upper limit irrespective of the usage. 
    2) Inserting a new element in an array of elements is expensive because the room has to be created for the new elements and to create room existing elements have to be shifted but in Linked list if we have the head node then we can traverse to any node through it and insert new node at the required position.
    For example, in a system, if we maintain a sorted list of IDs in an array id[]. 
    id[] = [1000, 1010, 1050, 2000, 2040]. 
    And if we want to insert a new ID 1005, then to maintain the sorted order, we have to move all the elements after 1000 (excluding 1000). 
    Deletion is also expensive with arrays until unless some special techniques are used. For example, to delete 1010 in id[], everything after 1010 has to be moved due to this so much work is being done which affects the efficiency of the code.
    Advantages over arrays 
    1) Dynamic size 
    2) Ease of insertion/deletion

    Drawbacks: 
    1) Random access is not allowed. We have to access elements sequentially starting from the first node(head node). So we cannot do binary search with linked lists efficiently with its default implementation. Read about it here. 
    2) Extra memory space for a pointer is required with each element of the list. 
    3) Not cache friendly. Since array elements are contiguous locations, there is locality of reference which is not there in case of linked lists.
   
    Representation: 
    A linked list is represented by a pointer to the first node of the linked list. The first node is called the head. If the linked list is empty, then the value of the head points to NULL. 
    Each node in a list consists of at least two parts: 
    1) data (we can store integer, strings or any type of data).
    2) Pointer (Or Reference) to the next node (connects one node to another)
    In C, we can represent a node using structures. Below is an example of a linked list node with integer data. 
    In Java or C#, LinkedList can be represented as a class and a Node as a separate class. The LinkedList class contains a reference of Node class type. 

    In this , methods to insert a new node in linked list are discussed. A node can be added in three ways 
    1) At the front of the linked list  
    2) After a given node. 
    3) At the end of the linked list.

    To delete a node from the linked list, we need to do the following steps. 
    1) Find the previous node of the node to be deleted. 
    2) Change the next of the previous node. 
    3) Free memory for the node to be deleted.

    A Linked List is a linear data structure that is used to store a collection of data with the help of nodes. 
    A linked list is made up of two items that are data and a reference to the next node. 
    A reference to the next node is given with the help of pointers and data is the value of a node. 
    Each node contains data and links to the other nodes. 
    It is an ordered collection of data elements called a node and the linear order is maintained by pointers. 
    It has an upper hand over the array as the number of nodes i.e. the size of the linked list is not fixed and can grow and shrink as and when required, unlike arrays. Some of the features of the linked list are as follows:
        The consecutive elements are connected by pointers.
        The size of a linked list is not fixed.
        The last node of the linked list points to null.
        Memory is not wasted but extra memory is consumed as it also uses pointers to keep track of the next successive node.
        The entry point of a linked list is known as the head. 
    
    The various types of linked lists are as follows:
        Singly Linked List: It is the most basic linked list in which traversal is unidirectional i.e. from the head node to the last node.
        Doubly Linked List: In this linked list, traversal can be done in both ways, and hence it requires an extra pointer.
        Circular Linked List: This linked list is unidirectional but in this list, the last node points to the first i.e. the head node and hence it becomes circular in nature.
        Circular Doubly Linked List: The circular doubly linked list is a combination of the doubly linked list and the circular linked list. It means that this linked list is bidirectional and contains two pointers and the last pointer points to the first pointer.

    Linked Lists are most commonly used for:
        Linked Lists are mostly used because of their effective insertion and deletion. 
        Insertion and deletion in the linked list are very effective and take less time complexity as compared to the array data structure. 
        This data structure is simple and can be also used to implement a stack, queues, and other abstract data structures.

    Applications of Linked Lists:
        Linked Lists are used to implement stacks and queues.
        It is used for the various representations of trees and graphs.
        It is used in dynamic memory allocation( linked list of free blocks).
        It is used for representing sparse matrices.
        It is used for the manipulation of polynomials.
        It is also used for performing arithmetic operations on long integers.

    Applications of Linked Lists in real world: 
        The list of songs in the music player are linked to the previous and next songs. 
        In a web browser, previous and next web page URLs are linked through the previous and next buttons.
        In image viewer, the previous and next images are linked with the help of the previous and next buttons.
    
    Advantages of Linked Lists:
        Insertion and deletion in linked lists are very efficient.
        Linked list can be expanded in constant time.
        For implementation of stacks and queues and for representation of trees and graphs.
        Linked lists are used for dynamic memory allocation which means effective memory utilization hence, no memory wastage.
        
    Disadvantages of Linked Lists:
        Use of pointers is more in linked lists hence, complex and requires more memory.
        Searching an element is costly and requires O(n) time complexity.
        Traversing is more time consuming and reverse traversing is not possible in singly linked lists.
        Random access is not possible due to dynamic memory allocation.

    An unordered_set is implemented using a hash table where keys are hashed into indices of a hash table so that the insertion is always randomized. 
    All operations on the unordered_set takes constant time O(1) on an average which can go up to linear time O(n) in worst case which depends on the internally used hash function, but practically they perform very well and generally provide a constant time lookup operation. 
    
    Set is an ordered sequence of unique keys whereas unordered_set is a set in which key can be stored in any order, so unordered. Set is implemented as a balanced tree structure that is why it is possible to maintain order between the elements (by specific tree traversal).
    The unordered_set can contain key of any type – predefined or user-defined data structure but when we define the key of type user define the type, we need to specify our comparison function according to which keys will be compared.
    The time complexity of set operations is O(log n) while for unordered_set, it is O(1).

    For unordered_set many functions are defined among which most used are the size and empty for capacity, find for searching a key, insert and erase for modification. 
    The Unordered_set allows only unique keys, for duplicate keys unordered_multiset should be used. 

    Find Length Of Loop/Floyd’s Cycle detection:
        It is known that Floyd’s Cycle detection algorithm terminates when fast and slow pointers meet at a common point. 
        It is also known that this common point is one of the loop nodes. Store the address of this common point in a pointer variable say (ptr). 
        Then initialize a counter with 1 and start from the common point and keeps on visiting the next node and increasing the counter till the common pointer is reached again. 
        At that point, the value of the counter will be equal to the length of the loop.
    
        Algorithm:
            Find the common point in the loop by using the Floyd’s Cycle detection algorithm
            Store the pointer in a temporary variable and keep a count = 0
            Traverse the linked list until the same node is reached again and increase the count while moving to next node.
            Print the count as length of loop
*/

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

int main(){
    void PrintNode(Node*);
    void InsertAtFirst(Node**,int);
    void InsertAfter(Node* ,int );
    void InsertAtLast(Node** ,int );
    void DeleteNode(Node** ,int );
    int CountNode(Node*);
    bool FindLoopInLL(Node* );
    int DetectAndCountLoopInLL(Node* );

    Node* head=NULL;

    InsertAtFirst(&head,1);
    InsertAtFirst(&head,2);
    InsertAtFirst(&head,3);

    InsertAfter(head->next,4);
    InsertAtLast(&head,5);
    InsertAtLast(&head,6);
    InsertAtLast(&head,7);
    cout<<"count=>"<<CountNode(head)<<endl;

    PrintNode(head);
    
    DeleteNode(&head,3);
    PrintNode(head);

    DeleteNode(&head,7);
    PrintNode(head);
    cout<<"count=>"<<CountNode(head)<<endl;

    DeleteNode(&head,4);
    PrintNode(head);
    cout<<"count=>"<<CountNode(head)<<endl;
    
   head->next->next->next->next = head;

    cout<<"isLoopPresent=>"<<FindLoopInLL(head)<<endl;
    cout<<"nodeLoopCount=>"<<DetectAndCountLoopInLL(head)<<endl;
    
    
    return(0);
}

void InsertAtFirst(Node** head,int data){
    Node* newData=new Node();
    newData->data=data;
    newData->next=NULL;

    newData->next=(*head);

    (*head)=newData;
}

void InsertAfter(Node* previous,int data){
    if(previous==NULL){
        cout<<"prvious node is null"<<endl;
        return;
    }

    Node* newData=new Node();
    newData->data=data;
    newData->next=NULL;

    newData->next=previous->next;
    previous->next=newData;

    return;
}

void InsertAtLast(Node** head,int data){
    Node* temp=NULL;
    
    Node* newData=new Node();
    newData->data=data;
    newData->next=NULL;

    if((*head)==NULL){
        (*head)=newData;
        return;
    }

    temp=(*head);

    while(temp->next!=NULL){
        temp=temp->next;
    }
    
    temp->next=newData;
    
    return;
}

void DeleteNode(Node** head,int val){
    Node* temp=(*head);
    Node* prev=NULL;
    Node* delNode=NULL;

    while(temp!=NULL){
        
        if(temp->data==val){
            
            delNode=temp;
            
            if(temp==(*head)){
                (*head)=temp->next;
            }else{
                prev->next=temp->next;
            }
            //cout<<"Deleted==>"<<delNode->data<<endl;
            delete delNode;
            
            break;
        }
        prev=temp;
        temp=temp->next;

    }
}

bool FindLoopInLL(Node* temp){
    unordered_set<Node*> map;
    while(temp!=NULL){
        if(map.find(temp) != map.end()){
            return true;
        }
        map.insert(temp);
        temp=temp->next;
    }
    return false;
}

//Floyd’s Cycle detection
int DetectAndCountLoopInLL(Node* temp){
    int CountNodeInLoop(Node* );

    Node* slow=temp;
    Node* fast=temp;

    while(slow && fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;

        if (slow==fast){
            return CountNodeInLoop(slow);
        }
    }

    return 0;
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

int CountNode(Node* temp){
    int counter=0;
    
    while(temp!=NULL){
        temp=temp->next;
        counter++;
    }

    return counter;
}

int CountNodeInLoop(Node* temp){
    int counter=1;

    Node* n=temp;
    while(temp->next!=n){
        temp=temp->next;
        counter++;
    }

    return counter;
}

