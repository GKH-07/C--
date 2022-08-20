#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m){
cout<<"size : "<<m.size()<<endl;
for(auto &a : m)
{
    cout<<a.first<< " : "<<a.second<<endl;
}
}
int main(){
map<int,string> m;
// key = int , string  = value
// ------------------
// inputing in maps
// noraml map h so sorted hoga order keys ka
m[1] = "girish";
m[6] = "GK";
m.insert({4,"gaurav"});
 // is way se input dene pr time logn lagega

//map ko print kse kerte h ------------------
// map<int,string> :: iterator it;
// for(it= m.begin();it != m.end(); ++it)
// {
//     cout <<(*it).first<<" : "<<(*it).second<<endl;
// }
 // another way
print(m);
// find function // log n time complexity
auto it = m.find(3);
if(it == m.end()){
    cout<<"no value";
}
else{
    cout<<(*it).first<<" -> "<<(*it).second;
}

// itreator return karega
// erase function
m.erase(4);
print(m); 
return 0;
}