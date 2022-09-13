#include<iostream>
using namespace std;

void swap(int *j , int *i){
    int temp = *j;
    *j = *i;
    *i = temp;
}

void selectionSort(int arr[], int n){
    for(int j = 0; j < n-1 ; j++){
        int min = arr[j];
        int min_index = j;
        for(int i = j + 1; i < n; i++){
            if(arr[i]<min){
                min = arr[i];
                min_index = i; 
            }
        }
        if(min_index != j){
            swap(&arr[j] , &arr[min_index]);
        }
        
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
    
    printArray(arr, n);
    
    selectionSort(arr , n);
    
    printArray(arr, n);
}

/////////The time complexity of selection sort algorithm is O(n^2) as we make use of two nested loops
/////////The space complexity of selection sort algorithm is O(1)
