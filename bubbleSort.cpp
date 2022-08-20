#include <iostream>

using namespace std;

int main()
{
    
    int i=2;
    int count=0;
    while(true){
        int a=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                a=1;
                break;
            }
        }
        if(a==0){
            cout<<i<<" ";
            count++;
        }
        if(count==20){
            break;
        }
        i++;
    }
    return 0;
}