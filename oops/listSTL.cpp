// for more function of list visit  : - https://www.cplusplus.com/reference/list/list/ 
#include<iostream>
#include<list>
 
using namespace std;
 
//void display(list<int> &lst){
//     list<int> :: iterator it; // iterator same as in vector
//     for (it = lst.begin(); it != lst.end(); it++) 
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

 
int main(){
    
    list<int> list1;                        // 1.empty list of 0 length...........................
 
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
 
    display(list1);
    
    list<int> list2(3);                     // 2.empty list of length 3............................
    list<int> :: iterator it = list2.begin();
    *it = 45;
    it++;
    *it = 6;
    it++;
    *it = 9;
    it++;

    // cout<<"After pop from back : ";
    // list1.pop_back();                  // 3. pop functions.....................................
    // display(list1);
    // cout<<"After pop from begin : ";
    // list1.pop_front();
    // display(list1);
 
    // list2.remove(9);                  // 4. remove that elemnt from list......................
    // //list2.remove(it);  // error      
    // display(list2);

    // cout<<"before sorting function : ";  // 5. sroting function ..................................   
    // display(list1);
    // cout<<"after sorting function  : ";
    // list1.sort();
    // display(list1);

    // cout<<endl<<"merge function";       // 6. merge function......................................
    // list1.merge(list2);
    // display(list1);
    
    
    return 0;
}
