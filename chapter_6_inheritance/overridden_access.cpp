#include<iostream>
using namespace std;
 class base
 {
     public:
     void print()
     {
         cout<<"Derived"<<endl;
     }
 };
 class derived : public base
 {
     public:
     void print()
     {
         cout<<"Derived"<<endl;
         base :: print();
     }
 };
 int main()
 {
     derived d1;
     d1.print();
     d1.base :: print();
     
 }