#include <iostream>
using namespace std;

int main()
{   
    //inputing of first array
    int n,m;
    cin>>n>>m;
    int a1[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cin>>a1[i][j];
        }
    }
    // inputing of second array
    int a,b;
    cin>>a>>b;
    int a2[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;b<m;j++)
        {
            cin>>a2[i][j];
        }
    }
    
    int matrix[a][j];
    for (int i = 0; i < a; i++) {
        for (int x = 0; x < j; x++) {
            rslt[i][x] = 0;
 
            for (int k = 0; k < R2; k++) {
                rslt[i][j] += mat1[i][k] * mat2[k][j];
            }
 
            cout << rslt[i][j] << "\t";
        }
 
        cout << endl;
    }
    return 0;
}
