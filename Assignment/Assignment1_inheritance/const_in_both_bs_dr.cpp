//constructor in both base and derived class
#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"Default constructor from base";

    }
};
class derived:public base{
    public:
    derived()
    {
        cout<<"\nDefault constructor from derived class";
    }
};
int main()
{
    derived d;
}