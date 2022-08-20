#include<bits/stdc++.h>
using namespace std;
int main(){
int m;
m=4;
for(int i=0;i<=m;i++){
    for(int k=1;k<=m-i;k++)
    {
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout <<i+j-1;
    }
    for(int j=1;j<i;j++){
        cout<<2*i-j-1;
    }
    cout<<endl;
}
return 0;
}