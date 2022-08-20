#include <bits/stdc++.h>
using namespace std;
class BaseClass
{
public:
    int var_base = 1;
    void display()
    { // ye function base class me bhi hai aur derived class me bhi
        cout << " 1 . Dispalying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        // cout<<" 1.1 Dispalying Base class variable var_base "<<var_base<<endl;
        cout << " 2 . Dispalying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;     // base class ka pointer
    BaseClass obj_base;                // base class ka object
    DerivedClass obj_derived;          // pointer of derived class
    base_class_pointer = &obj_derived; // *** -- Pointing base class pointer to derived class --  ***

    //  base_class_pointer -> var_base = 11;
    //  // base_class_pointer -> var_derived= 134; // Will throw an error CAN'T DO THIS......
    //  base_class_pointer->display();

    // base_class_pointer->var_base = 3400;
    // base_class_pointer->display();

    DerivedClass *derived_class_pointer;  // derived class ka pointer
    derived_class_pointer = &obj_derived; //  derived class ka pointer pointing derived class object
    // derived_class_pointer->var_base = 9448;
    // derived_class_pointer->var_derived = 98;
     derived_class_pointer->display();

    return 0;
}