/*
    Heap sort is a comparison-based sorting technique based on Binary Heap data structure. 
    It is similar to selection sort where we first find the minimum element and place the minimum element at the beginning. We repeat the same process for the remaining elements.

    Let us first define a Complete Binary Tree. A complete binary tree is a binary tree in which every level, except possibly the last, is completely filled, and all nodes are as far left as possible.
    
    A Binary Heap is a Complete Binary Tree where items are stored in a special order such that the value in a parent node is greater(or smaller) than the values in its two children nodes. 
    The former is called max heap and the latter is called min-heap. The heap can be represented by a binary tree or array.

    Why array based representation for Binary Heap?
        Since a Binary Heap is a Complete Binary Tree, it can be easily represented as an array and the array-based representation is space-efficient. 
        If the parent node is stored at index I, the left child can be calculated by 2 * I + 1 and the right child by 2 * I + 2 (assuming the indexing starts at 0).
    
    How to “heapify” a tree?
        The process of reshaping a binary tree into a Heap data structure is known as ‘heapify’. A binary tree is a tree data structure that has two child nodes at max. 
        If a node’s children nodes are ‘heapified’, then only ‘heapify’ process can be applied over that node. A heap should always be a complete binary tree.
    
    Starting from a complete binary tree, we can modify it to become a Max-Heap by running a function called ‘heapify’ on all the non-leaf elements of the heap. i.e. ‘heapify’ uses recursion.

    Algorithm for “heapify”:
        heapify(array)
        Root = array[0]
        Largest = largest( array[0] , array [2 * 0 + 1]. array[2 * 0 + 2])
        if(Root != Largest)
            Swap(Root, Largest)
    
    Heap Sort Algorithm for sorting in increasing order: 
        1.Build a max heap from the input data. 
        2.At this point, the largest item is stored at the root of the heap. Replace it with the last item of the heap followed by reducing the size of heap by 1. Finally, heapify the root of the tree. 
        3.Repeat step 2 while the size of the heap is greater than 1.
    
    How to build the heap? 
        Heapify procedure can be applied to a node only if its children nodes are heapified. So the heapification must be performed in the bottom-up order.
        
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    void Sort(int[],int);
    void Print(int[],int);
//9,4,8,7,2,1,6,0,5,3
    int arr[]={12, 11, 13, 5, 6, 7};
    int sizeArr=sizeof(arr)/sizeof(arr[0]);
        
    Print(arr,sizeArr);
    Sort(arr,sizeArr);
    Print(arr,sizeArr);

    return(0);
}
void Print(int arr[],int sizeArr){
    cout <<"---------Print---------------------"<< endl; 
    int i; 
    for (i=0; i < sizeArr; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
}
void Swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void Sort(int arr[],int sizeArr){
    void Swap(int*,int*);
    void Heapify(int[],int,int);

    cout <<"-----------Sort Start---------------------"<< endl; 
    cout <<"sizeArr/2-1:"<< sizeArr/2-1 << endl; 

    for(int i=sizeArr/2-1; i>=0; i--){
        
        cout <<"i:"<< i << endl;
        cout <<"sizeArr:"<< sizeArr << endl;
        cout<<"arr:"; 
        for (int k=0; k<sizeArr; k++){
            cout << arr[k] << " "; 
        }
        cout<<endl;

        Heapify(arr,sizeArr,i);
    }
    
    cout <<"sizeArr-1:"<< sizeArr-1<< endl; 

    for(int i=sizeArr-1; i>0; i--){
        cout<<"Before Swap:"<<endl; 
        cout<<"i:"<<i<<"|arr[i]:"<<arr[i]<<endl;
        cout<<"0"<<"|arr[0]:"<<arr[0]<<endl;

        Swap(&arr[0],&arr[i]);
        cout<<"After Swap:"<<endl; 
        cout<<"arr:"; 
        for (int k=0; k<sizeArr; k++){
            cout << arr[k] << " "; 
        }
        cout<<endl;

        Heapify(arr, i, 0);
    }

    cout <<"-----------Sort End---------------------"<< endl; 
}

void Heapify(int arr[],int sizeArr,int i){
    void Swap(int*,int*);
    cout <<"-----------Heapify Start---------------------"<< endl; 

    int largest = i;

    int leftIndex = 2*i+1;
    int rightRight = 2*i+2;

    cout <<"leftIndex:"<< leftIndex << endl;
    cout <<"rightRight:"<< rightRight << endl;
    cout <<"i:"<< i << endl;
    cout <<"sizeArr:"<< sizeArr << endl;
    cout<<"arr:";
    for (int k=0; k<sizeArr; k++){
        cout << arr[k] << " "; 
    }
    cout<<endl;

    cout <<"largest:"<< largest << endl;

    if(leftIndex < sizeArr && arr[leftIndex] > arr[largest]){
        cout <<"arr[leftIndex]:"<< arr[leftIndex] << endl;
        cout <<"arr[largest]:"<<  arr[largest] << endl;
        cout <<"largest=leftIndex" << endl;

        largest=leftIndex;
    }


    if(rightRight < sizeArr && arr[rightRight] > arr[largest]){

        cout <<"arr[rightRight]:"<< arr[rightRight] << endl;
        cout <<"largest:"<< largest<<"|arr[largest]:"<<  arr[largest] << endl;
        cout <<"largest=rightRight" << endl;

        largest=rightRight;
    }

    cout <<"largest:"<< largest << endl;

    if(largest != i){
        cout<<"Before Swap:"<<endl; 
        cout<<"i:"<<i<<"|arr[i]:"<<arr[i]<<endl; 
        cout<<"arr[largest]:"<<arr[largest]<<endl;

        Swap(&arr[i],&arr[largest]);
        cout<<"After Swap:"<<endl; 
        cout<<"arr:"; 
        for (int k=0; k<sizeArr; k++){
            cout << arr[k] << " "; 
        }
        cout<<endl;

        Heapify(arr, sizeArr, largest);
    }

    cout <<"-----------Heapify End---------------------"<< endl; 
}