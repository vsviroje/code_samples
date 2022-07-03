/*
    The Merge Sort algorithm is a sorting algorithm that is considered as an example of the divide and conquer strategy. 
    So, in this algorithm, the array is initially divided into two equal halves and then they are combined in a sorted manner. 
    We can think of it as a recursive algorithm that continuously splits the array in half until it cannot be further divided. 
    This means that if the array becomes empty or has only one element left, the dividing will stop, i.e. it is the base case to stop the recursion. 
    If the array has multiple elements, we split the array into halves and recursively invoke the merge sort on each of the halves. 
    Finally, when both the halves are sorted, the merge operation is applied. Merge operation is the process of taking two smaller sorted arrays and combining them to eventually make a larger one.

    Pseudocode :

    •    Declare left variable to 0 and right variable to n-1 
    •    Find mid by medium formula. mid = (left+right)/2
    •    Call merge sort on (left,mid)
    •    Call merge sort on (mid+1,rear)
    •    Continue till left is less than right
    •    Then call merge function to perform merge sort.

    Algorithm:
        step 1: start
        step 2: declare array and left, right, mid variable 
        step 3: perform merge function.
                mergesort(array,left,right)
                mergesort (array, left, right)
                if left > right
                return
                mid= (left+right)/2
                mergesort(array, left, mid)
                mergesort(array, mid+1, right)
                merge(array, left, mid, right)
        step 4: Stop

    Is Merge sort Stable: 
        Yes, merge sort is stable. 

    Applications of Merge Sort: 
        •   Merge Sort is useful for sorting linked lists in O(nLogn) time. In the case of linked lists, the case is different mainly due to the difference in memory allocation of arrays and linked lists. 
            Unlike arrays, linked list nodes may not be adjacent in memory. Unlike an array, in the linked list, we can insert items in the middle in O(1) extra space and O(1) time. 
            Therefore, the merge operation of merge sort can be implemented without extra space for linked lists.
            In arrays, we can do random access as elements are contiguous in memory. Let us say we have an integer (4-byte) array A and let the address of A[0] be x then to access A[i], we can directly access the memory at (x + i*4). 
            Unlike arrays, we can not do random access in the linked list. Quick Sort requires a lot of this kind of access. 
            In a linked list to access i’th index, we have to travel each and every node from the head to i’th node as we don’t have a continuous block of memory. 
            Therefore, the overhead increases for quicksort. Merge sort accesses data sequentially and the need of random access is low.
        •   Inversion Count Problem
        •   Used in External Sorting

    Drawbacks of Merge Sort:

        Slower comparative to the other sort algorithms for smaller tasks.
        Merge sort algorithm requires an additional memory space of 0(n) for the temporary array.
        It goes through the whole process even if the array is sorted.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    void Sort(int[],int,int);
    void Print(int[],int);

    int arr[]={9,4,8,7,2,1,6,0,5,3};
    int sizeArr=sizeof(arr)/sizeof(arr[0]);
        
    Print(arr,sizeArr);
    Sort(arr,0,sizeArr-1);
    Print(arr,sizeArr);

    return(0);
}

void Print(int arr[],int sizeArr){
    cout <<"--------------------------------"<< endl; 
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

void Sort(int arr[],int begin,int end){
    void Merge(int[],int,int,int);

    if(begin >= end){
        return;
    }

    int mid=begin + (end-begin)/2;

    Sort(arr,begin,mid);
    Sort(arr,mid+1,end);
    Merge(arr,begin,mid,end);

}
// Merges two subarrays of array[].
// First subarray is arr[begin..mid]
// Second subarray is arr[mid+1..end]
//creating left and right array based on left,mid,right

void Merge(int arr[],int left,int mid,int right){
    
    int arrLeftLen=mid-left+1;
    int arrRightLen=right-mid;

    // Create temp arrays
    int arrleft[arrLeftLen];
    int arrRight[arrRightLen];

    int i,j,k;
    
    // Copy data to temp arrays leftArray[] and rightArray[]
    for(i=0;i<arrLeftLen;i++){
        arrleft[i]=arr[left+i];
    }

    for(j=0;j<arrRightLen;j++){
        arrRight[j]=arr[mid+1+j];
    }

    // Initial index
    i=0;
    j=0;
    k=left;

    // Merge the temp arrays back into array[left..right]
    while(i < arrLeftLen && j < arrRightLen){
        
        if(arrleft[i] <= arrRight[j]){
            arr[k]=arrleft[i];
            i++;
        }else{
            arr[k]=arrRight[j];
            j++;
        }

        k++;
    }

    // Copy the remaining elements of
    // left[], if there are any
    while(i < arrLeftLen){
        arr[k]=arrleft[i];
        i++;
        k++;
    }

    // Copy the remaining elements of
    // right[], if there are any
    while(j < arrRightLen){
        arr[k]=arrRight[j];
        j++;
        k++;
    }
}
