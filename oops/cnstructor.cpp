#include<bits/stdc++.h>
using namespace std;
class complexs
{
    int a,b;
public:
    complexs(int,int);
    ~complexs();
    void getnumber(){
        cout<<"number is : "<< a <<" + "<<b<<"i"<<endl;
    }
};
complexs::complexs(int x,int y)
{
    a=x;
    b=y;
}

complexs::~complexs()
{
     cout<<"distructor"<<endl;
}

int main(){
    //implicit c1(4,6);
complexs c1(10,20);
//explicit
complexs c2 = complexs(20,40);
c1.getnumber();
c2.getnumber();
return 0;
}