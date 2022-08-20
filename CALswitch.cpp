#include<iostream>
using namespace std;
 

 int main(){
     int n1,n2;
     char op;
     cout<<"enter two number";
     cin>>n1;
     cin>>n2;
     cout<<" use + - / * ";
     cout<<"enter operator";
     cin>>op;


     cout<<" use + - / * ";
     switch (op)
     {
     case '+':
         cout<<"sum = "<<n1+n2;
         break;
    case '-':
         cout<<"sub = "<<n1-n2;
         break;
     case '*':
         cout<<"mul = "<<n1*n2;
         break;
    case '/':
         cout<<"sub = "<<n1/n2;
         break;
     default:
     cout<<" sahi key press ker le ";

         break;
     }

 }