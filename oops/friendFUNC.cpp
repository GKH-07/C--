#include<bits/stdc++.h>
using namespace std;
class complexs{
    int a,b;
    public:
     void setnumber(int n1,int n2){
           a = n1;
           b = n2; 
        }
        friend complexs sumcomplex(complexs o1,complexs o2);
         void getnumber(){
        cout<<"number :"<< a <<"+ "<<b<<" i"<<endl;
        }
};
//freind...........................................
complexs sumcomplex(complexs o1,complexs o2){
    complexs obj3;
    obj3.setnumber((o1.a + o2.a),(o1.b + o2.b));
    return obj3;

}
//-------------------------------------------------
int main(){
complexs obj1,obj2,sum;
obj1.setnumber(10,5);
obj1.getnumber();
obj2.setnumber(2,4);
obj2.getnumber();
sum = sumcomplex(obj1,obj2);
sum.getnumber();
return 0;
}
// properties of friend function
// 1.not in the scope class 
// 2.since it is not in the scope of class,it cannot be called from the object of that class 
// 3. can be called without any is_object
// 4.usally contains argument as object
// 5.can be declared in public aur private section of class
// 6.it can't access the members directly by theri name,need object_name.member_name t access any member.
