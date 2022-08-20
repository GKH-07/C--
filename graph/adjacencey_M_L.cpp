#include<bits/stdc++.h>
using namespace std;

int n,M;// nodes,size, globally

void createAdj( int adj[][n] , int arr[][2] ){
    for(int i = 0;i<= n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            adj[i][j] = 0;// everu element become zero
        }
    }
    for(int i =0;i<M;i++){
        int x = arr[i][0];
        int y = arr[i][1];

        adj[x][y] = 1;
        adj[y][x] = 1;
        
    }
}

void printAdj(int adj[][n])
{
  
    for (int i = 0; i <=n; i++) {
        for (int j = 0; j <=n; j++) {
            cout<< adj[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
n = 5; // no of nodes

int arr[][2] = { {1,2} , {2,3} , {4,5}, {1,5} };
M = sizeof(arr) / sizeof(arr[0]); // 4

int adj[n][n];

createAdj(adj,arr);
printAdj(adj);


return 0;
}