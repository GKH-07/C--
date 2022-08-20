#include <iostream>

using namespace std;

void spiralprint(char arr[][100],int n,int m){
   int top=0;
   int bottom=n;
   int left=0;
   int right=m;
   
   int a=0;
   while(top<=bottom && left<=right){
       
       for(int i=left;i<=right;i++){
           if(a%2==0){
               arr[top][i]='-';
           }
           else{
               arr[top][i]='0';
           }
       }
       top++;

       for(int i=top;i<=bottom;i++){
            if(a%2==0){
               arr[i][right]='-';
           }
           else{
               arr[i][right]='0';
           }
           
       }
       right--;
       
       if(left<=right){
       for(int i=right;i>=left;i--){ 
           if(a%2==0){
               arr[bottom][i]='-';
           }
           else{
               arr[bottom][i]='0';
           }
           
       }
       
       bottom--;
       }
       if(top<=bottom){
       for(int i=bottom;i>=top;i--){
            if(a%2==0){
               arr[i][left]='-';
           }
           else{
               arr[i][left]='0';
           }
           
       }
       left++;
       }
       a++;
   }
}

int main()
{
    int n;
    cin>>n;
    char arr[100][100];
    spiralprint(arr,n-1,n-1);
  
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          cout<<arr[i][j]<<" ";
      }
      cout<<endl;
  }
    return 0;
}