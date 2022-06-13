//no constructor in base and derived class
#include<iostream>
using namespace std;
class base
{
    //body of class
    //np constructor
};
class derived : public base
{
    //body of derived class
    //no constructor
    public:
    void message()
    {
        cout<<"No constructor in base and derived class";
    }
};
int main()
{
    derived d;
    d.message();
}