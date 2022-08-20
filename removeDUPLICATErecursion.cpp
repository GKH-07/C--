#include <bits/stdc++.h>
using namespace std;
string removeDUP(string s){
    if(s.length() == 0){
        return "";
    }
   char ch=s[0];//ch=a
   string ans = removeDUP(s.substr(1));// aaa bbbb cccc
   if(ch == ans[0]){
       return ans;
   }
    return (ch + ans);
}

int main()
{
   cout<< removeDUP("aaaabbbbbccccdddd");
    return 0;
}
