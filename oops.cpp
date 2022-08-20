#include<bits/stdc++.h>
using namespace std;
class oops
{
private:
    int roll,age;
    string name;
public:
    oops();
    void print();
};
oops :: oops(){
    name ="abcdefgh";
    roll=0;
    age=0;
}
void oops::print(){
    cout<<name<<endl;
    cout<<roll<<endl;
    cout<<age;
    }

int main(){
oops s1;
s1.print();
return 0;
}