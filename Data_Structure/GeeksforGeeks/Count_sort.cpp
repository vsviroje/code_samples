/*
    Counting sort is a sorting technique based on keys between a specific range. 
    It works by counting the number of objects having distinct key values (kind of hashing). 
    Then do some arithmetic to calculate the position of each object in the output sequence. 

    Characteristics of counting sort:
        Counting sort makes assumptions about the data, for example, it assumes that values are going to be in the range of 0 to 10 or 10 – 99 etc, Some other assumptions counting sort makes are input data will be all real numbers.
        Like other algorithms this sorting algorithm is not a comparison-based algorithm, it hashes the value in a temporary count array and uses them for sorting.
        It uses a temporary array making it a non In Place algorithm.
    
    Working –
        Step 1 – Take input array & range(no of unique integer values involved)
        Step 2 – Create the output array of size same as input array. Create count array with size equal to the range & initialize values to 0.
        Step 3 – Count each element in the input array and place the count at the appropriate index of the count array
        Step 4 – Modify the count array by adding the previous counts(cumulative). The modified count array indicates the position of each object/element in the output array.
        Step 5 – Output each object from the input array into the sorted output array followed by decreasing its count by 1.
        Step 6 – Print the sorted output array.

    Couting Sort Algorithm –
        take input_array[size]
        create output_array[size]
        take range (or no of unique elements)
        create count_array[range] & initialize all values to 0
            for(int i=0 to i<range)
                count_array[i] = 0
        Count each element & place it in the count_array
            for(int i = 0 to i<size)
                ++count_array[input_array[i]]
        Modify count_array[] to store previous counts (cumulative)
            for(int i = 1 to i < range)
                count_array[i]=count_array[i]+count_array[i-1]
        Place elements from input_array[] to output_array[] using this count_array[] that has the actual positions of elements
            for(int i=0 to i<size)
                output_array[–count_array[input_array[i]]] = input_array[i]
        Transfer sorted values from output_array[] to input_array[]
            for(i=0 to i<size)
                input_array[i]=output_array[i]

    Below eg. Counting sort which takes negative numbers as well
*/

#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

int main(){
    void Sort(vector<int>&);
    void Print(vector<int>&);

    vector<int>arr={ -5, -10, 0, -3, 8, 5, -1, 10};

    Print(arr);
    Sort(arr);
    Print(arr);

    return(0);
}

void Print(vector<int>& arr){
    cout <<"--------------------------------"<< endl; 
    int i; 
    for (i=0; i < arr.size(); i++) 
        cout << arr[i] << " "; 
    cout << endl; 
}

void Swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void Sort(vector<int>& arr){

    int max =*max_element(arr.begin(),arr.end());
    int min =*min_element(arr.begin(),arr.end());
    int range = max-min + 1;

    cout<<"min:"<<min<<endl;
    cout<<"max:"<<max<<endl;
    cout<<"range:"<<range<<endl;
    cout<<"arr.size:"<<arr.size()<<endl;

    vector<int>count(range);
    vector<int>output(arr.size());

    cout<<"arr|";
    for(int i=0; i < arr.size(); i++){
        cout <<"["<<i<<":"<<arr[i]<<":"<<arr[i]-min<< "]"; 
        count[arr[i]-min]++;
    }
    cout<<endl;

    cout<<"count arr             |"; 
    for(int i=0; i < count.size(); i++){
        cout <<"["<<count[i]<< "]"; 
    }
    cout<<endl;

    for(int i =1; i< count.size(); i++){
        count[i]+=count[i-1];
    }

    cout<<"After update|Count arr|"; 
    for(int i=0; i < count.size(); i++){
        cout <<"["<<count[i]<< "]"; 
    }
    cout<<endl;

    cout<<"Adding data|output arr|"; 
    for(int i=arr.size()-1; i>=0; i--){
        cout <<"["<<i<<":"<<arr[i]<<":"<<arr[i]-min<<":"<<count[arr[i]-min]-1<< "]"; 
        output[count[arr[i]-min]-1] = arr[i];
        count[arr[i]-min]--;
    }
    cout<<endl;
    
    for(int i=0; i < arr.size(); i++){
        arr[i]=output[i];
    }

}