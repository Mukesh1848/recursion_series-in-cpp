#include <iostream>
using namespace std;

int sumElement(int arr[] , int n){
    
    // base case
    if(n==0){
        return 0;
    }
   
   if(n==1){
       return arr[0];
   }
   
   int remainingPart = arr[0] + sumElement(arr+1 , n-1);
   return remainingPart;
}

int main() {
    
    int arr[5] = {1,2,3,4,40};
    int n = 5;
    
    int ans = sumElement(arr, n);
    cout<<ans<<endl;
                      
    return 0;
}
