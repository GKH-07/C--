#include<iostream>
using namespace std;
class A{
    int a;
    public:
        // A & setData(int a){
        void setData(int a){ // local variable ki priority jada hoti hai
            this->a = a; // agr this use na kare to a ko value assigned nahi hogi,
                        //  but error bhi naih aaega kyuki garbage value hogi a ke ander
            // return *this; return this -> a;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    // this is a keyword which is a pointer which points to the object which invokes the member function
    A a;
    a.setData(40);
    a.getData();
    return 0;
}