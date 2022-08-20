#include<iostream>
using namespace std;

int main(){
    int no;
    cout<<"enter number = ";
    cin>>no;
    int i;
    for(i=2;i<no;i++)
    {
        if (no % i==0)
            {
                cout<<no<< " is not Prime \n"<<endl;
                break;
            }
    }
    if(i==no){
        cout<<no<<" is prime"<<endl;
    }
    return 0;
}

