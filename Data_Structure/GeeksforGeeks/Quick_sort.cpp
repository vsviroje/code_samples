/*
    QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot. 
    There are many different versions of quickSort that pick pivot in different ways. 
        Always pick first element as pivot.
        Always pick last element as pivot (implemented below)
        Pick a random element as pivot.
        Pick median as pivot.
    
    The key process in quickSort is partition(). 
    Target of partitions is, given an array and an element x of array as pivot, put x at its correct position in sorted array and put all smaller elements (smaller than x) before x, and put all greater elements (greater than x) after x. 
    All this should be done in linear time.

    Partition Algorithm: 
        There can be many ways to do partition, following pseudo code adopts the method given in CLRS book. 
        The logic is simple, we start from the leftmost element and keep track of index of smaller (or equal to) elements as i. 
        While traversing, if we find a smaller element, we swap current element with arr[i]. Otherwise we ignore current element.

    Pseudo Code for recursive QuickSort function:
        low  –> Starting index,  high  –> Ending index
        quickSort(arr[], low, high) {

            if (low < high) {

                pi is partitioning index, arr[pi] is now at right place 

                pi = partition(arr, low, high);

                quickSort(arr, low, pi – 1);  // Before pi

                quickSort(arr, pi + 1, high); // After pi

            }

        }

    Pseudo code for partition() 
    This function takes last element as pivot, places the pivot element at its correct position in sorted array, and places all smaller (smaller than pivot) to left of pivot and all greater elements to right of pivot
        partition (arr[], low, high){
            // pivot (Element to be placed at right position)
            pivot = arr[high];  

            i = (low – 1)  // Index of smaller element and indicates the 
            // right position of pivot found so far
            for (j = low; j <= high- 1; j++){

                // If current element is smaller than the pivot
                if (arr[j] < pivot){
                    i++;    // increment index of smaller element
                    swap arr[i] and arr[j]
                }
            }

            swap arr[i + 1] and arr[high])
            return (i + 1)
        }


    eg:
        Consider: arr[] = {10, 80, 30, 90, 40, 50, 70}

            Indexes:  0   1   2   3   4   5   6 
            low = 0, high =  6, pivot = arr[h] = 70
            Initialize index of smaller element, i = -1

            

            Traverse elements from j = low to high-1
            j = 0: Since arr[j] <= pivot, do i++ and swap(arr[i], arr[j])
            i = 0 
            arr[] = {10, 80, 30, 90, 40, 50, 70} // No change as i and j are same
            j = 1: Since arr[j] > pivot, do nothing

            

            j = 2 : Since arr[j] <= pivot, do i++ and swap(arr[i], arr[j])
            i = 1
            arr[] = {10, 30, 80, 90, 40, 50, 70} // We swap 80 and 30 

            

            j = 3 : Since arr[j] > pivot, do nothing // No change in i and arr[]
            j = 4 : Since arr[j] <= pivot, do i++ and swap(arr[i], arr[j])
            i = 2
            arr[] = {10, 30, 40, 90, 80, 50, 70} // 80 and 40 Swapped

            

            j = 5 : Since arr[j] <= pivot, do i++ and swap arr[i] with arr[j] 
            i = 3 
            arr[] = {10, 30, 40, 50, 80, 90, 70} // 90 and 50 Swapped 

            

            We come out of loop because j is now equal to high-1.
            Finally we place pivot at correct position by swapping arr[i+1] and arr[high] (or pivot) 
            arr[] = {10, 30, 40, 50, 70, 90, 80} // 80 and 70 Swapped 

            

            Now 70 is at its correct place. All elements smaller than 70 are before it and all elements greater than 70 are after it.
            Since quick sort is a recursive function, we call the partition function again at left and right partitions

            

            Again call function at right part and swap 80 and 90

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

void Sort(int arr[],int low,int high){
    int QuickSort_Partition(int[],int,int);

    if(low < high){

        int partition_index=QuickSort_Partition(arr,low,high);
        
        cout<<"Sort()->low:"<<low<<"|high:"<<high<<"|partition_index:"<<partition_index<<endl;

        Sort(arr, low, partition_index-1);
        Sort(arr, partition_index+1, high);

    }
}

int QuickSort_Partition(int arr[],int low,int high){
    void Swap(int* x,int* y);
    
    cout <<"############################################"<< endl; 

    int pivot=arr[high];
    int i=low-1;
    
    cout<<"arr:";
    for (int k=low; k<=high; k++){
        cout << arr[k] << " "; 
    }
    cout<<endl;
    cout<<"low:"<<low<<endl; 
    cout<<"high:"<<high<<endl; 
    cout<<"pivot:"<< pivot<<endl; 
    cout<<"i:"<<i<<endl; 
    cout<<"j:"<<low<<endl; 

    for(int j=low;j<=high-1;j++){
        if(arr[j]<pivot){
            i++;

            cout<<"Before Swap:"<<endl; 
            cout<<"i:"<<i<<"|arr[i]:"<<arr[i]<<endl; 
            cout<<"j:"<<j<<"|arr[j]:"<<arr[j]<<endl; 

            Swap(&arr[i],&arr[j]);
            
            cout<<"after Swap:"<<endl; 
            cout<<"arr:"; 
            for (int k=low; k<=high; k++){
                cout << arr[k] << " "; 
            }
            cout<<endl;
        }
    }

    cout<<"Before Swap with high:"<<endl; 
    cout<<"i+1:"<<i+1<<"|arr[i+1]:"<<arr[i+1]<<endl; 
    cout<<"high:"<<high<<"|arr[high]:"<<arr[high]<<endl; 

    Swap(&arr[i+1],&arr[high]);

    cout<<"after Swap with high:"<<endl; 
    cout<<"arr:"; 
    for (int k=low; k<=high; k++){
        cout << arr[k] << " "; 
    }
    cout<<endl;

    cout <<"############################################"<< endl; 

    return(i+1);
}
