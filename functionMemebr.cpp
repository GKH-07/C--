#include<bits/stdc++.h>
using namespace std;
class student{
int rollno;
float marks;
public:
void getdata(int,float);
void putdata(){
    cout<<"roll no : "<<rollno<<endl;
    cout<<"marks : "<<marks<<endl;
}
};
void student :: getdata(int x,float y){
    rollno=x;
    marks =y;
}
int main(){
    student s1;
    s1.getdata(100,56.5);
    s1.putdata();

return 0;
}