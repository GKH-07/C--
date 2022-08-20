#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	unordered_map<char,int> m;
	for(int i=0;i<s.length();i++)
	{
		m[s[i]]++;
	}
	int maxx = INT_MIN;
	for(auto it: m)
	{
		maxx = max(maxx,it.second);
	}
	for(auto it :m){
		if(it.second==maxx)cout<<it.first<<" ";
	}
	return 0;
}