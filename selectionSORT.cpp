#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[5];
//input
for (int i = 0; i < 5; i++){
    cin>>arr[i];
    }
    //selection sort
    for (int i = 0; i < 4; i++){
        for (int j=i+1; j < 5; j++){
            if(arr[j]<arr[i]){
                // int temp =arr[j];
                // arr[j]=arr[i];
                // arr[i]=temp;
                swap(arr[i],arr[j]);
            }
        }
    }
    //output
    for (int i = 0; i < 5; i++)
    {    cout<<" ";
         cout<<arr[i];
    }
    
}