#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // string st = "Hey!!!, my name is girsh";
    // // Opening files using constructor and writing it
    // ofstream Girishout("IOfile1.txt"); // Write operation
    // Girishout<<st;
 //------------------------------------------------------------------------------------------
    string st2;
    // Opening files using constructor and reading it
    ifstream girishin("IOfile1.txt"); // Read operation
    girishin>>st2;
    getline(girishin, st2);  // if you have line which contain spaces
    cout<<st2;

    return 0;
}
