#include<iostream>
using namespace std;

class base
{
    public:
 base()
{
    cout<<"This is a constructor of base class"<<endl;
}
~base()
{
    cout<<"This is destructor of base class"<<endl;
}
};
class derived : public base
{
    public:
    derived()
    {
        cout<<"This is a constructor of derived class"<<endl;
    }
    ~derived()
    {
        cout<<"This is destructor of derived class"<<endl;
    }
};
int main()
{
    derived d1;
    return 0;
}
