#include <iostream>

using namespace std;
void subset(int arr[],int n){
    
    while(n){
    for (int i=0;i<n;i++) {
        for(int j=i;j<n;j++){
            cout<<arr[j]<<" ";
        }cout<<"\n";
    } n--;}
}
int main()
{   int arr[4]={1,2,3,4};
    subset(arr,4);
    return 0;
}
