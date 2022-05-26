#include<iostream>

using namespace std;

class construct
{
    public:
 int a,b;
 construct()
 {
     cout<<"Constructor is called:";
     a=10;
     b=20;
     }
 void display()
 {
     cout<<"\nsamrat";
 }
 
};
int main()
{
construct c;
c.display();
return 0;
}