#include<bits/stdc++.h>
using namespace std;
int catalan(int n){
    // if(n<0){
    //     return 0;
    // }
    // if(n == 1 || n==0){
    //     return 1;
    if(n <= 1){
        return 1;
    }
    int sum = 0;
    for(int i= 0;i<n;i++){
        sum += catalan(i) * catalan(n - i - 1);/// because i start ho rha h zero se,so agr n =10 h pr prhli coiffeint ke saath to C0C9 aaega
    }
    return sum;
}
int main(){
    for(int i = 0;i<10;i++){
        cout<<catalan(i)<<" ";
    }

return 0;
}