#include<bits/stdc++.h>
using namespace std;
class parent //base class
{ int age;                  //privte member kabhi inherit ker sekte
    public:
    int salary;
    parent(){}                          // default constructor is must
    parent(int x){
        age =x;
        salary = 120000;
    }    
};                                 // default visiblity mode  = private
class child : public parent //derived class   VISIBLITY MODE - parent class ke public members child ke bhi public members ban jaenge
{ 
    public:
    child(int z){
        salary = z;
    }
    int citycode =12;
};
int main(){
    parent p(36);
    cout<< p.salary<<endl;
    child raju(150000);
    cout << raju.salary<<endl;
    cout<< raju.citycode;

return 0;  
}