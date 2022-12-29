#include <iostream>
using namespace std;

bool binarySearch(int arr[] , int s , int e , int  k){
    
    if(s>e){
        return false;
    }
    
    int mid = s +(e-s)/2;
    
    if(arr[mid]==k){
        return true;
    }
    
    if(arr[mid] > k){
        return binarySearch(arr , s , mid-1 ,k);
    }
    else{
        return binarySearch(arr , mid+1 , e ,k);
    }
}

int main() {
    
    int arr[5] = {11,20,37,45,67};
    int n =5;
    int k = 11;
    
    bool ans = binarySearch(arr, 0 ,n-1, k);
    
    if(ans){
        cout<<"found"<<endl;
    }
    else{
     cout<<"not found"<<endl;  
    }
                      
    return 0;
}
