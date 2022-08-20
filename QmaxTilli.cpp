/*
problem: GIVEN AN ARRAY A[] OF SIZE N ,FOR EVERY I FROM O TO  -1 OUTPUT MAX(A[0],A[1],.....A[N]) */
#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cout<<"size : ";
cin>>n;
int arr [n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int mx =INT_MIN;
    cout<<"arranged acc to max till i"
    for (int i = 0; i < n; i++)
    {
        mx= max(mx,arr[i]);
        cout << mx << "  ";
    }
    return 0;
}