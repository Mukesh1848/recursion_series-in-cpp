#include <iostream>
using namespace std;

bool linearSearch(int arr[] , int n , int  k){
    
    // base case
    if(n==0){
        return 0;
    }
   
   if(arr[0]==k){
       return true;
   }
   
   bool remainingPart = linearSearch(arr+1 , n-1, k);
   return remainingPart;
}

int main() {
    
    int arr[5] = {11,20,37,45,67};
    int n = 5;
    int k = 40;
    
    bool ans = linearSearch(arr, n , k);
    
    if(ans){
        cout<<"found"<<endl;
    }
    else{
     cout<<"not found"<<endl;  
    }
                      
    return 0;
}
