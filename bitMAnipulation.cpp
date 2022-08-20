/* CHECK IF GIVEN NUMBER IS POWER OF TWO.......................................
#include <iostream>
using namespace std;
bool power(int n){
    return !(n && (n & n-1));
}
int main(){
    cout<<power(160);
}   */
/*// NUMBER OF ONES IN BINARY FORM OF A NUMBER.................................
#include <iostream>
using namespace std;
int one(int n){
int count =0;
while(n){
    n = n & (n-1);
    count++;
} return count;
}

int main(){
    cout<<one(19);
}       */
// NUMBER OF SUBSET OF A GIVEN ARRAY........................................... 
/*#include <iostream>
using namespace std;
void subset(int arr[],int n){
    for(int i=0;i < (1<<n) ;i++){      //(i<<n) =2^n
        for(int j=0;j<n;j++){
           if(i &(1<<j)){
            cout<<arr[j]<<"  ";
                             }
                              }cout<<endl;
                                }}
int main(){
    int arr[4]={1,2,3,4};
    subset(arr,4);
    return 0;
}*/
// unqiue number in array jaha baaki number double hai {1,1,2,2,3,3,4}....................
/*#include<bits/stdc++.h>
using namespace std;
int unique(int arr[],int n){
     int xorsum =0;
         for(int i = 0; i < n; i++) {
              xorsum = xorsum ^ arr[i];  }
     return xorsum;
     }
int main(){
         int arr[7]={1,2,3,4,3,2,1}  ;
         std::cout<<unique(arr,7) << std::endl;
         return 0;
     }*/
     
     //dry run        EXPLANATION---------
     /*for(int i = 0; i < n; i++){
    xorsum = xorsum ^ arr[i];
}

Let's dry run this for arr[] = {1, 2, 3, 4, 1, 2, 3}:
what we can write:
xorsum = 0 ^ 1;
xorsum = 0 ^ 1 ^ 2;
.
.
.
xorsum = 0 ^ 1 ^ 2 ^ 3 ^ 4 ^ 1 ^ 2 ^ 3;
By Commutative Property -
xorsum = 0 ^ (1 ^ 1) ^ (2 ^ 2) ^ (3 ^ 3) ^ 4;
xorsum = 0 ^ 0 ^ 0 ^ 0 ^ 4;
xorsum = 4;*/
