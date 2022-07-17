/*
    The lower bound for Comparison based sorting algorithm (Merge Sort, Heap Sort, Quick-Sort .. etc) is Ω(nLogn), i.e., they cannot do better than nLogn. 
    Counting sort is a linear time sorting algorithm that sort in O(n+k) time when elements are in the range from 1 to k.
            
    What if the elements are in the range from 1 to n2? 
        We can’t use counting sort because counting sort will take O(n2) which is worse than comparison-based sorting algorithms. Can we sort such an array in linear time? 
            Radix Sort is the answer. 
            The idea of Radix Sort is to do digit by digit sort starting from least significant digit to most significant digit. 
            Radix sort uses counting sort as a subroutine to sort.

    The Radix Sort Algorithm 
        Do the following for each digit i where i varies from the least significant digit to the most significant digit. 
        Here we will be sorting the input array using counting sort (or any stable sort) according to the i’th digit.

    Radix sort is a non-comparative sorting algorithm. It avoids comparison by creating and distributing elements into buckets according to their radix.
    For elements with more than one significant digit, this bucketing process is repeated for each digit, while preserving the ordering of the prior step, until all digits have been considered. 
    For this reason, radix sort has also been called bucket sort and digital sort. Typically Radix sort uses counting sort as a subroutine to sort.

    Working –
        Step 1 – Take input array and find MAX number in the array
        Step 2 – Define 10 queues each representing a bucket for each digit from 0 to 9.
        Step 3 – Consider the least significant digit of each number in the list which is to be sorted.
        Step 4 – Insert each number into their respective queue based on the least significant digit.
        Step 5 – Group all the numbers from queue 0 to queue 9 in the order they have inserted into their respective queues.
        Step 6 – Repeat from step 3 based on the next least significant digit.
        Step 7 – Repeat from step 2 until all the numbers are grouped based on the most significant digit.

    Radix Sort Pseudocode RadixSort(arr[], size) –
        take input array & its size as – arr[size]
        Get max element from this array
            m = GetMax(arr, size)
        Call counting sort d times based on the no of digits in the max number m.
            for (int div = 1; m/div > 0; div *= 10)
                CountingSort(arr, size, div)

    Counting Sort Pseudocode CountingSort(arr[], size, div) –
        take arr[size]
        create output array called – output[size]
        take range (or no of unique elements. Default value 10 in our case)
        create count array called – count[range] & initialize all values to 0
            for(int i=0 to i<range)
                count[i] = 0
        Count each element & place it in the count[] array
            for(int i = 0 to i<size)
                count[ (arr[i]/div)%10 ]++
        Modify count[] array to store previous counts (cumulative)
            for(int i = 1 to i < range)
                count[i] += count[i – 1];
        Place elements from input array arr[] to output array output[] using this count[] array that has the actual positions of elements
            for(int i=0 to i<size)
                output[count[ (arr[i]/div)%10 ] – 1] = arr[i]
                count[ (arr[i]/div)%10 ]–
        Transfer sorted values from output[] array to input array arr[]
            for(i=0 to i<size)
                arr[i] = output[i]

*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
 void Sort(int[],int);
    void Print(int[],int);

    int arr[]={ 170, 45, 75, 90, 802, 24, 2, 66};
    int sizeArr=sizeof(arr)/sizeof(arr[0]);
        
    Print(arr,sizeArr);
    Sort(arr,sizeArr);
    Print(arr,sizeArr);

    return(0);
}

void Print(int arr[],int sizeArr){
    int i;
    cout<<"arr|[print]|";
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

int getMax(int arr[],int arrSize){
    int max=arr[0];
    for(int i=1;i<arrSize;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

void Sort(int arr[],int arrSize){
    int getMax(int arr[],int arrSize);
    void CountSort(int arr[],int arrSize,int exp);
    void Print(int[],int);

    int max=getMax(arr,arrSize);
    cout<<"max:"<<max<<endl;

    for(int exp=1; max/exp>0; exp*=10){
        cout<<"exp:"<<exp<<"|max/exp:"<<(max/exp)<<endl;
        Print(arr,arrSize);
        cout <<"--------------------------------"<< endl; 
        CountSort(arr,arrSize,exp);
        cout <<"--------------------------------"<< endl; 

    }
}

void CountSort(int arr[],int arrSize,int exp){
    int output[arrSize];
    int i,count[10]={0};

    cout<<"arr|";
    for(i=0;i<arrSize;i++){
        cout <<"["<<i<<":"<<arr[i]<<":"<<(arr[i]/exp)<<":"<<(arr[i]/exp)%10<< "]"; 
        count[(arr[i]/exp)%10]++;
    }
    cout<<endl;

    cout<<"count arr             |"; 
    for(int i=0; i < 10; i++){
        cout <<"["<<count[i]<< "]"; 
    }
    cout<<endl;

    for(i=1;i<10;i++){
        count[i] +=count[i-1];
    }

    cout<<"After update|Count arr|"; 
    for(int i=0; i <10; i++){
        cout <<"["<<count[i]<< "]"; 
    }
    cout<<endl;

    cout<<"Adding data|output arr|"; 
    for(i=arrSize-1; i>=0; i--){
        cout <<"["<<i<<":"<<arr[i]<<":"<<(arr[i]/exp)%10<<":"<<count[(arr[i]/exp)%10]-1<< "]"; 
        output[count[(arr[i]/exp)%10]-1]=arr[i];
        count[(arr[i]/exp)%10]--;
    }
    cout<<endl;

    for(i=0;i<arrSize;i++){
        arr[i]=output[i];
    }
}