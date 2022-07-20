/*
    Shell sort is mainly a variation of Insertion Sort. 
    In insertion sort, we move elements only one position ahead. 
    When an element has to be moved far ahead, many movements are involved. 
    The idea of ShellSort is to allow the exchange of far items. 
    In Shell sort, we make the array h-sorted for a large value of h.
    We keep reducing the value of h until it becomes 1. 
    An array is said to be h-sorted if all sublists of every h’th element are sorted.

    ShellSort is an in-place comparison sort.  
    It is mainly a variation of sorting by exchange (bubble sort) or sorting by insertion (insertion sort). 
    This algorithm avoids large shifts as in case of insertion sort, if the smaller value is to the far right and has to be moved to the far left. The idea of shell sort is to allow exchange of far items. 
    This spacing is termed as interval or gap.

    ShellSort is more efficient compared to Insertion Sort or Bubble sort specially when –
        1. Smaller value elements are towards the end of the array/list
        2. Large sized array/list
        3. Efficiency depends on how we select the GAP/interval

    Algorithm:

    Step 1 − Start
    Step 2 − Initialize the value of gap size. Example: h
    Step 3 − Divide the list into smaller sub-part. Each must have equal intervals to h
    Step 4 − Sort these sub-lists using insertion sort
    Step 5 – Repeat this step 2 until the list is sorted.
    Step 6 – Print a sorted list.
    Step 7 – Stop.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    void Sort(int[],int);
    void Print(int[],int);

    int arr[]={12, 34, 54, 2, 3};
    int sizeArr=sizeof(arr)/sizeof(arr[0]);
        
    Print(arr,sizeArr);
    Sort(arr,sizeArr);

    return(0);
}
void Print(int arr[],int sizeArr){
    cout <<"--------------Print------------------"<< endl; 
    int i; 
    for (i=0; i < sizeArr; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
    cout <<"--------------------------------"<< endl; 

}
void Swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void Sort(int arr[],int sizeArr){
    void Print(int[],int);

    cout<<"sizeArr:"<<sizeArr<<endl;

    for(int gap=sizeArr/2; gap>0; gap/=2){
        cout<<"gap:"<<gap<<endl;

        for(int i=gap; i<sizeArr; i++){
            cout<<"i:"<<i<<endl;

            int temp=arr[i];
            cout<<"temp:"<<temp<<endl;

            int j;
            for(j=i; j>=gap && arr[j-gap]>temp; j-=gap){
                cout<<"j:"<<j<<"|arr[j]:"<< arr[j]<<endl;
                cout<<"j-gap:"<<j-gap<<"|arr[j-gap]:"<<arr[j-gap]<<endl;
        
                arr[j]=arr[j-gap];

            }
            cout<<"after loop|arr[j]:"<< arr[j]<<"|j:"<<j<<endl;
            arr[j]=temp;
        }

        Print(arr,sizeArr);
    }
}