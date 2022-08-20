#include<bits/stdc++.h>
using namespace std;
// time complexity in this is BIGO = O(n) therfore we use binary seacrh
int linearsearch(int arr[],int n,int key){

    for (int i = 0; i < n; i++) {
        if (arr[i]==key){
            return i;
        }
    }
    return -1;
    
}
int main(){
    cout<<"size =";
    int n;
    cin>>n;
    cout<<"input elemnet"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    cout<<"key = ";
    int key;
    cin>>key;

    cout<<linearsearch(arr,n,key);
    return 0;
    
}
