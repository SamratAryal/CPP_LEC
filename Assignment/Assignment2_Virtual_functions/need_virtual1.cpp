#include<iostream>
using namespace std;
class animal
{
    public:
    void display()
    {
        cout<<"\nFrom base class animal";
    }
};
class cow : public animal
{
    public:
    void display()
    {
        cout<<"\nFrom derived class cow";
    }
};
class dog : public animal
{
    public:
    void display()
    {
        cout<<"From Derived class dog";
    }
};
int main()
{
    animal *panm;
    animal anm;
    cow cw;
    dog dg;
    panm=&anm;
    panm->display();
    panm=&cw;
    panm->display();
    panm=&dg;
    panm->display();
    return 0;
}