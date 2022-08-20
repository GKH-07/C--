#include <iostream>
#include <cmath> //for unique
#include <list>

using namespace std;
 
 void display(list<int> &lst){
     list<int> :: iterator it;
    //  for (it = lst.begin(); it != lst.end(); it++)
    //  {
    //      cout<<*it<<" ";
    //  }
    it = lst.begin();
    it++;
    cout<<*it<<" ";


     
 }
int main ()
{
  list<int> mylist;
  int a;
  //      inputing element in list by  user................................................
  cout<<"enter element of list : ";
  for (int i=1; i<=5; ++i){
      cin>>a;
     mylist.push_back(a);
  }
 // cout<<"List is : ";
  //display(mylist);

  mylist.sort();
  //cout<<endl<<"Sorted list : ";
  //display(mylist);

  //cout<<endl<<"unique element list : ";
  mylist.unique();   
  cout<<"second largest ellement : ";
  display(mylist); // sort list pe kaam kerta hai

                

  return 0;
}