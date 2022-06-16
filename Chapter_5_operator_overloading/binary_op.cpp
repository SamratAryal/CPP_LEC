#include<iostream>
using namespace std;

class binary
{
    private:
    int a,b;

    public:
    binary()
    {
        a=0;
        b=0;
    }
    binary(int x,int y)
    {
        a=x;
        b=y;
    }
    binary operator + (binary bin)
  {
    binary b1;
    cout<<"Value of a in overloading "<<a<<endl;
    cout<<"Value of b in overloading "<<b<<endl;
    cout<<"Value of bin a in overloading "<<bin.a<<endl;
    cout<<"Value of bin b in overloading "<<bin.b<<endl;
    //calling object is passed implicitly and second obejct is passed through argument
    b1.a=a-bin.a;
    b1.b=b-bin.b;
    return b1;
  }
  void display()
  {
    cout<<"The value of a is:"<<a<<endl;
        cout<<"The value of b is:"<<b<<endl;
  }

};
int main()
{
    binary b1,b2,b3;
    b1=binary(10,20);
    b2=binary(30,40);
    b3=b1+b2;
    b1.display();
    b2.display();
    b3.display();

}