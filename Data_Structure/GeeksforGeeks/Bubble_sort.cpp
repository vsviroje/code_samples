/*
    Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. 
    This algorithm is not suitable for large data sets as its average and worst case time complexity is quite high.

    First Pass: 
        Bubble sort starts with very first two elements, comparing them to check which one is greater.
        ( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1. 
        ( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ), Swap since 5 > 4 
        ( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 ), Swap since 5 > 2 
        ( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.
    
    Second Pass: 
        Now, during second iteration it should look like this:
        ( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ) 
        ( 1 4 2 5 8 ) –> ( 1 2 4 5 8 ), Swap since 4 > 2 
        ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
        ( 1 2 4 5 8 ) –>  ( 1 2 4 5 8 ) 
    
    Third Pass: 
        Now, the array is already sorted, but our algorithm does not know if it is completed.
        The algorithm needs one whole pass without any swap to know it is sorted.
        ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
        ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
        ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
        ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
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

    int i,j;
    bool isSwaped=false;
    for(i=0;i<sizeArr-1;i++){
        
        isSwaped=false;

        for(j=0;j<sizeArr-i-1;j++){
            
            if(arr[j] > arr[j+1]){
                Swap(&arr[j],&arr[j+1]);
                isSwaped=true;
            }
        }

        if(isSwaped==false){
            break;
        }
    }

}