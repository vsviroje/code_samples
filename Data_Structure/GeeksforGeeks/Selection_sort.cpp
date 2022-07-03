/*
    The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. 
    The algorithm maintains two subarrays in a given array.
        The subarray which is already sorted. 
        Remaining subarray which is unsorted.
    In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray. 

    Approach:
        Initialize minimum value(min_idx) to location 0
        Traverse the array to find the minimum element in the array
        While traversing if any element smaller than min_idx is found then swap both the values.
        Then, increment min_idx to point to next element
        Repeat until array is sorted
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    void Sort(int[],int);
    void Print(int[],int);

    int arr[]={9,4,8,7,2,1,6,0,5,3};
    int sizeArr=sizeof(arr)/sizeof(arr[0]);
        
    Print(arr,sizeArr);
    Sort(arr,sizeArr);
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

void Sort(int arr[],int sizeArr){
    void Swap(int*,int*);

    int i,j,minIndex;

    for(i=0;i<sizeArr-1;i++){
        
        minIndex=i;

        for(j=i+1;j<sizeArr;j++){
            
            if(arr[j] < arr[minIndex]){
                minIndex=j;
            }

        }

        Swap(&arr[i],&arr[minIndex]);
    }

}