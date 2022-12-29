#include <iostream>
using namespace std;

int Fact(int n){
    
    // base case 
    if(n==1){
        return 1;
    }
    
    // recursive call
    return n * Fact(n-1);
}

int main() {
   
    int n;
    cin>>n;
    int ans = Fact(n);
    cout<<ans<<endl;

    return 0;
}
