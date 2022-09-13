#include<iostream>
using namespace std;

void swap(int *j , int *i){
    int temp = *j;
    *j = *i;
    *i = temp;
}

// this is one type of approach 
void bubbleSort(int arr[], int n){
    int i , j;
    for(i = 0; i < n -1; i++){
        for(j = 0; j < n - i - 1; j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

//this is another type of approach
void bubbleSort1(int arr[], int n){
    int m = n;
    while(m>=0){
        for(int i = 0; i < m - 1; i++){
            if (arr[i]>arr[i+1]){
                swap(&arr[i], &arr[i+1]);
            }
        }
        m--;
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
    
    bubbleSort1(arr , n);
    
    cout<<"Array after sorting"<<endl;
    printArray(arr, n);
}


/////////The time complexity of bubble sort algorithm is O(n^2)
/////////The space complexity of bubble sort algorithm is O(1)
