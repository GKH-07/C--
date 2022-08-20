#include<bits/stdc++.h>
using namespace std;
class defaultCNSTR
{
private:
    int data,data2;
    
public:
    defaultCNSTR(int a,int b =7){
        data  = a;
        data2 = b;
    }
    void getdata(){
        cout<<data <<","<< data2 <<endl;
    }

};

int main(){
    defaultCNSTR obj1(10,100);
    obj1.getdata();
    defaultCNSTR obj2(10);
    obj2.getdata();

return 0;
}