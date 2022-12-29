#include <iostream>
using namespace std;

bool isSorted(int arr[] , int n){
    
    // base case
    if(n==0 || n==1){
        return true;
    }
   
     // recursive call  
    if(arr[0] > arr[1]){
        return false;
    }
    else{
          bool ans = isSorted(arr+1, n-1);
          return ans;
    }
}

int main() {
    
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    
    int ans = isSorted(arr, n);
    
    if(ans){
        cout<< "arr is sorted"<<endl;
    }
    else{
        cout<< "arr is not sorted"<<endl;
    }
                      
    return 0;
}
