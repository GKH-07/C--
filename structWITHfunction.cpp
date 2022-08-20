#include<bits/stdc++.h>
using namespace std;
int main(){
struct value
{
    int date;
    string month;
    int year;
};
value v;
v.date=20;
v.month="July";
v.year=2020;
cout<<v.date<<"/";
cout<<v.month<<"/";
cout<<v.year;
return 0;
}