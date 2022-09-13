#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j = j-1;
        }
        arr[j+1] = key; 
    }  
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
    
    insertionSort(arr , n);
    
    cout<<"Array after sorting"<<endl;
    printArray(arr, n);
}

/////////The time complexity of insertion sort is O(n^2)
/////////The space complexity of insertion sort id O(1)
