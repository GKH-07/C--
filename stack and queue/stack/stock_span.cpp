// both array and stack approach 
#include<bits/stdc++.h>
using namespace std;

int main(){
int price[7]={100,120,60,70,75,85,130};
int size = sizeof(price)/sizeof(price[0]);
int span[size];
stack<int> st;
st.push(0);
span[0]=1;
for(int i=1;i<size;i++)
{
    while(!st.empty() && price[st.top()] < price[i])
    {
        st.pop();
    }
    if(st.empty()){
        span[i]=(i + 1 );
    }
    else{
        span[i] = (i-st.top());
    }
    st.push(i);
}

// printing span array............................................
for(int i=0;i<size;i++){
    cout<<span[i]<<"  ";
}
return 0;
}


//arraay approach time : n^2.................................
// for(int i=0;i<7;i++)
// {
//     span[i]=1;
//     for (int j = i-1; j > 0 ;j--)
//     {
//         if(arr[i]>arr[j])
//         {
//             span[i]++;
//         }
//         else{
//             break;
//         }
//     }
// }

