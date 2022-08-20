#include <iostream>
using namespace std;
int firstoccr(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstoccr(arr, n, i + 1, key);
}
int lastoccr(int arr[],int n,int i,int key){ 
    i=n-1;
    if(i==0){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return lastoccr(arr,n-1,i ,key);
}

int main()
{
    int arr[6]={1,2,3,4,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key =2;
    int i=0;
    cout<<"first : ";
   cout<<firstoccr(arr,n,i,key);
   cout<<"\nlast : ";
    cout<<lastoccr(arr,n,i,key);
    return 0;
}