/*
    Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. 
    The array is virtually split into a sorted and an unsorted part. 
    Values from the unsorted part are picked and placed at the correct position in the sorted part.

    Characteristics of Insertion Sort:
        This algorithm is one of the simplest algorithm with simple implementation
        Basically, Insertion sort is efficient for small data values
        Insertion sort is adaptive in nature, i.e. it is appropriate for data sets which are already partially sorted.
    
    Insertion Sort Algorithm 
        To sort an array of size N in ascending order: 
            Iterate from arr[1] to arr[N] over the array. 
            Compare the current element (key) to its predecessor. 
            If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.

    
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

    int i,j,key;

    for(i=1;i<sizeArr;i++){
        
        key=arr[i];
        j=i-1;
        
        // Move elements of arr[0..i-1], 
        // that are greater than key, to one
        // position ahead of their
        // current position
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}