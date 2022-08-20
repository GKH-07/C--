#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){        // 2.functiom to display elements of vector.............
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){ 
    vector<int> vec1;               // 1.inatilize a ZERO size vector........................
        /* 1.1   vector<int> vec1;              //zero length integer vector
                 vector<char> vec2(4);          //4-element character vector
                 vector<char> vec3(vec2);       //4-element character vector from vec2
                 vector<int> vec4(6,3);          //6-element vector of 3s -(3 3 3 3 3 3)
        */
    int element, size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);    // 3.pushing elements in vector..........................
    }
    display(vec1);
    cout<<"using pop function "<<endl;
    vec1.pop_back();               // 4.pop back delete last element of vector...............
  
    display(vec1);
    vector<int> :: iterator iter = vec1.begin(); // iterator is similar to pointer...........
    cout<<"after insert functio"<<endl;
    vec1.insert(iter,555);  
    display(vec1);      //6. insert function at where iterator points..............
    vec1.insert(iter+1,2,666);    // iter+1 = next position..................................
    display(vec1);

    return 0;
}
