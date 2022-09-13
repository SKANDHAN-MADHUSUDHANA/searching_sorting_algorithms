//////// The below solution is iteration method

#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int k){
    int strt = 0, end = n-1;
    int mid = n/2;
    while(strt<=end){
        if(arr[mid]==k){
            return mid+1;
        }
        else if(arr[mid]<k){
            strt=mid+1;
            end=n-1;
            mid=(strt+end)/2;
        }
        else{
            end=mid-1;
            strt = 0;
            mid = (strt + end)/2;
        }
    }
    return -1;
}


int main(){
    int n;
    int arr[100];
    cout<<"Enter the size of the array (make sure its less than 100) :"<<endl;
    cin>>n;
    cout<<"Enter the elements in sorted increasing order"<<endl;
    for (int i = 0; i < n; i++ ){
        cout<<"Enter the element to be inserted at position :"<<i+1<<endl;
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to be searched in the array :"<<endl;
    cin>>key;
    
    int ans = binarySearch(arr,n,key);
    
    (ans==-1)?cout<<"The element is not present in the array"<<endl
    :cout<<"The element is present at position :"<<ans<<endl;
}

///////// The below solution is in recursive method

#include<iostream>
using namespace std;

int binarySearch(int arr[],int start,int end,int key){
    if(start<=end){
        int mid = (start+end)/2;
        
        if (arr[mid]==key){
            return mid+1;
        }
        else if(arr[mid]>key){
            return binarySearch(arr,start,mid-1,key);
        }
        else{
            return  binarySearch(arr,mid+1,end,key);
        }
       
    }
    return -1;
}


int main(){
    int n;
    int arr[100];
    cout<<"Enter the size of the array (make sure its less than 100) :"<<endl;
    cin>>n;
    cout<<"Enter the elements in sorted increasing order"<<endl;
    for (int i = 0; i < n; i++ ){
        cout<<"Enter the element to be inserted at position :"<<i+1<<endl;
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to be searched in the array :"<<endl;
    cin>>key;
    
    int ans = binarySearch(arr,0,n-1,key);
    
    (ans==-1)?cout<<"The element is not present in the array"<<endl
    :cout<<"The element is present at position :"<<ans<<endl;
}


///////// The time complexity of binary searching algorithm is O(log n)
///////// The space complexity of binary search algorithm depends on the implementation method for iterative method it is O(1) for recursion it is O(log n) 
