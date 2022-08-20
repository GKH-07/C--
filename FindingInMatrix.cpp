#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m; 
    cin>>n>>m;
    int target;
    cin>>target;
    int a[n][m];
    // inputing of matrix
    for (int i = 0; i <n; i++) {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
     }
     bool found = false;
     int r=0,c=n-1;
     while (r <m && c>=0)
     {
       if (a[r][c]  == target)
       {
           found = true;
       }
       a[r][c] > target ? c-- : r++;//if(a>taregt) then c-- else r++
     }
     
     if (found)
     {
         cout<<"elemnt found";
     }
     else
        cout<<"element is not found";

return 0;        
 }