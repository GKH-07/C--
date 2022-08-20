#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<" size  = ";
    cin>>n;
    int arr[n];
        cout<<"write elemnts of an array = ";
            for (int i = 0; i < n; i++)
             {
           cin>>arr[i];
             }

    int max=INT_MIN;
    int min=INT_MAX;

    cout<<"the MAX AND MIN  is = ";
        for (int i = 0; i < n; i++)
    {
         if (arr[i]>max)
         {
             max = arr[i];
         }
         if(arr[i]<min){
             min=arr[i];
         }
    }
    cout<<max<<" , "<<min;
    
}