#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,m;
 cout<<"size of two arrays : ";
 cin>>n>>m;
 int arr1[n];
 int arr2[m];

 for(int i=0;i<n;i++){
     cin>>arr1[i];
 }
 for(int i=0;i<m;i++){
     cin>>arr1[i];
 }
//  for(int i=0;i<n;i++){
//      cout<<arr1[i]<<" ";
//  } 
//  cout<<endl;
//  for(int i=0;i<m;i++){
//      cout<<arr1[i]<<" ";
//  }
 cout<<endl;
 
 if(n==m){
     for (int i = 0; i < n; i++)
     {
         if(arr1[i] == arr2[i]){
             cout<<"ëqual";
         }

     }
 }
 else
 {
     cout<<"arrays are not equal";
 }
return 0;
}

// #include <iostream>
// using namespace std;

// bool arrayComparer(int *a, size_t asize, int *b, size_t bsize){
//     if(asize != bsize){return false;}
//     for(size_t ite = 0; ite < asize; ++ite){
//        if(*(a+ite) != *(b+ite)){return false;}
//     }
//     return true;
// }

// int main()
// {
//     int ar1[]{0,1,2,3,4,5,6,7,8,9},
//         *ptr1 = ar1,
//         ar2[]{0,1,2,3,4,5,6,7,8,9},
//         *ptr2 = ar2;

//         size_t intSize = sizeof(int),
//                asize = sizeof(ar1) / intSize,
//                bsize = sizeof(ar2) / intSize;

//     cout << arrayComparer(ptr1,asize,ptr2,bsize) << endl;
//     return 0;
// }
