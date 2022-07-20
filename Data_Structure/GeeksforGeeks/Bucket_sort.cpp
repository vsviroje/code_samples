/*
    Bucket sort is mainly useful when input is uniformly distributed over a range. For example, consider the following problem. 
    Sort a large set of floating point numbers which are in range from 0.0 to 1.0 and are uniformly distributed across the range. How do we sort the numbers efficiently?
    A simple way is to apply a comparison based sorting algorithm. The lower bound for Comparison based sorting algorithm (Merge Sort, Heap Sort, Quick-Sort .. etc) is Ω(n Log n), i.e., they cannot do better than nLogn. 
    Can we sort the array in linear time? Counting sort can not be applied here as we use keys as index in counting sort. Here keys are floating point numbers.  
    The idea is to use bucket sort. Following is bucket algorithm.

    Algo:
        bucketSort(arr[], n)
            1) Create n empty buckets (Or lists).
            2) Do following for every array element arr[i].
            .......a) Insert arr[i] into bucket[n*array[i]]
            3) Sort individual buckets using insertion sort.
            4) Concatenate all sorted buckets.
*/

#include<bits/stdc++.h>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    void Sort(float[],int);
    void Print(float[],int);

    float arr[]={ 0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
    int sizeArr=sizeof(arr)/sizeof(arr[0]);
        
    Print(arr,sizeArr);
    Sort(arr,sizeArr);
    Print(arr,sizeArr);

    return(0);
}
void Print(float arr[],int sizeArr){
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

void Sort(float arr[],int sizeArr){

   vector<float>bucket[sizeArr];

    for(int i=0;i<sizeArr;i++){
        int bucketIndex = sizeArr * arr[i];
        cout<<"bucketIndex:"<<bucketIndex<<"="<<sizeArr<<"*"<<arr[i]<< endl;
        bucket[bucketIndex].push_back(arr[i]);
    }

    for(int i=0;i<sizeArr;i++){
        sort(bucket[i].begin(),bucket[i].end());
    }

    int k=0;
    for(int i=0;i<sizeArr;i++){
        for(int j=0;j<bucket[i].size();j++){
            arr[k++]=bucket[i][j];
        }
    }
}