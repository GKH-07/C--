#include<bits/stdc++.h>
using namespace std;
void countsort(int arr[],int n){
    // for getting the maximum element of the array
    int k =arr[0];
    for(int i=0;i<n;i++){
        k =max(k,arr[i]);
    }

    int count[12] = {0};
    for (int  i = 0; i < n; i++)
    {   // jo number hai usi number wali positon pe increment hoga
        count[arr[i]]++;
    }
    for (int  i = 1; i <= k; i++)
    { // count ka comutetive progress // sum of previous and current term
        count[i]+=count[i-1];
    }
    int output[n];
        for(int i=n-1;i>=0;i--){
        output[--count[arr[i]]] = arr[i]; 
        }     
        //sorted array ko wapis input array me daal diya
    for (int i = 0; i < n; i++)
    {
      arr[i] = output[i];
    }
    
}
int main(){
    int arr[] = {1,3,2,3,4,1,6,4,3};
    countsort(arr,9);
    cout<<"sorted array : ";
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}