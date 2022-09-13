//////// The solution to merge sort algoritm is done using recursion

#include<iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end){
    int i = start;
    int j = mid + 1;
    int k = 0;
    int temp[end - start];
    
    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
        }
    }    
        if(i<=mid){
            while(i<=mid){
                temp[k++]=arr[i++];
            }
        }
        
        if(j<=end){
            while(j<=end){
                temp[k++]=arr[j++];
            }
        }
        
        k = 0;
        for (int l = start; l <= end; l++){
            arr[l]=temp[k++];
        }
}

void mergeSort(int arr[], int start, int end){
    if(start >= end){
        return;
    }
    
    int mid = (start + end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

void printArray(int arr[], int n){
    for (int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    int arr[100];
    cout<<"Enter the size of the array (make sure that it is less than 100) :"<<endl;
    cin>>n;
    for(int i = 0; i < n; i++){
        cout<<"Enter the element to be inserted at position :"<<i+1<<endl;
        cin>>arr[i];
    }
    cout<<"Array before sorting"<<endl;
    printArray(arr, n);
    
    mergeSort(arr , 0 , n - 1);
    
    cout<<"Array after sorting"<<endl;
    printArray(arr, n);
}

///////// The time complexity of mergesort algorithm is O(nlogn)
///////// the space complexity of mergesort algorithm is O(n)
