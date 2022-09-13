#include <iostream>
using namespace std;

int linearSearch (int arr[], int n , int key){
    for(int i = 0; i < n; i++){
        if(arr[i]==key){
            return i+1;
        }
    }
    
    return -1;
}

int main()
{
    int n ;
    int arr[100];
    cout<<"Enter the size of the array(make sure its less than 100)"<<endl;
    cin>>n;
    
    for(int i = 0; i < n; i++){
        cout<<"enter the element at position :" << i+1 <<endl;
        cin>>arr[i];
    }
    
    int key;
    cout<<"Enter the element to be searched in the array :";
    cin>>key;
    
    int ans = linearSearch(arr , n , key);
    
    if(ans == -1){
        cout<<"The element is not present in the array"<<endl;
    }
    else{
        cout<<"The element is present at positon :"<<ans<<endl;
    }
}


//////// The time complexity of linearsearch algorithm is O(n)
//////// The space complexity of linearsearch is O(1)
