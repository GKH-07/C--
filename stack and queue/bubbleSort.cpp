// reapetedly wap two element if they are in wrong order
// hur iteration ke baad last me sabse bada element aa jaega
// 12 45 {51 23}
// 12 {45 23} 51
// 12 23 45 51
#include<bits/stdc++.h>
using namespace std;
int main(){
 int arr[9] = {10,2,9,3,8,4,5,6,1};
 int n=9,temp;

for (int i = 0; i < n-1; i++){	
	for (int j = 0; j < n; j++){ 
		if (arr[j] > arr[j+1]){
		temp =arr[j];
        arr[j] = arr[j+1] ;
        arr[j+1] =temp;
}}}
for(int z=0;z<n;z++){
    cout<<arr[z]<<" ";
}}
