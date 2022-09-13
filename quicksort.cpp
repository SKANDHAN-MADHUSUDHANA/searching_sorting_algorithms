#include<iostream>
using namespace std;

void swap(int* s, int* e) 
{ 
    int temp = *s; 
    *s = *e; 
    *e = temp; 
}

int partition(int arr[], int start, int end){
    int pivot = arr[end];
    int i = (start - 1);
    
    for(int j = start; j <= end - 1; j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[end]);
    return i+1 ;
}

void quickSort(int arr[], int start, int end){
    if(start >= end){
        return;
    }
    
    int p = partition(arr,start,end);
    quickSort(arr,start,p-1);
    quickSort(arr,p+1,end);
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
    
    quickSort(arr , 0 , n - 1);
    
    cout<<"Array after sorting"<<endl;
    printArray(arr, n);
}
