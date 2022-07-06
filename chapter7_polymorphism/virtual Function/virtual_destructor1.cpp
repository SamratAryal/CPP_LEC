#include<iostream>
using namespace std;
class base
{
    public:
base()
{
    cout<<"\nBase class constrctor"<<endl;
}
virtual ~base()
{
    cout<<"\nBase class destructor"<<endl;
}

};
class derived : public base
{
    public:
    derived()
   {
    cout<<"Derived class constructor";
   }
   ~derived()
   {
    cout<<"\nDerived class destructor";
   }
};
int main()
{
  base *bs;
  bs=new derived;
  delete bs;
  return 0;
    
}
