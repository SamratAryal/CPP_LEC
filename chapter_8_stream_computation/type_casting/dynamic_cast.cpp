#include<iostream>
using namespace std;

class base
{
    public:
    virtual void print()
    {
        cout<<"Base"<<endl;
    }
};
class derived : public base
{
    public:
    void print()
    {
        cout<<"Derived"<<endl;
    }

} ;
int main()
{
    base *bptr,bpt;
    derived *dptr,dpt;

    bptr=&dpt;
    dptr=dynamic_cast<derived *>(bptr);
    dptr->print();
    if(dptr==nullptr)
    {
        cout<<"Null pointer"<<endl;
    }
    else
    {
        cout<<"Not Null"<<endl;
    }
return 0;
}
