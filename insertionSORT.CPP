#include<bits/stdc++.h>
using namespace std;
// time complexity is o(n^2)
int main(){
int n;
cout<<"size : ";
cin>>n; 
int arr[n];
//input
for (int i = 0; i < n; i++){
    cin>>arr[i];
    }
 
   //insertion sort
   /* idea : take an elemetn from the unsortted array place it is in its
      correspnding position it the sorted part,and shift the elements acoordingly*/
        for (int i = 0; i < n; i++)
        {
            int current = arr[i];
            int j = i-1;
            while (arr[j]>current && j>=0)
            {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = current;
        }
        

    //output
    cout<<"sorted array  :  ";
    for (int i = 0; i < n; i++)
    {
        cout<<"  ";
        
      cout<<arr[i];
    }
    
}