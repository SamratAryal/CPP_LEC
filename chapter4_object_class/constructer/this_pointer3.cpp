#include<iostream>
using namespace std;

class test{
private:
int x;
public:
void setx(int x)
{
    this->x;
}
void print()
{
cout<<"value of x is:"<<x<<endl;
cout<<"address of object that is calling x is"<<this<<endl;
}
};
int main()
{
    test obj1,obj2;
    obj1.setx(20);
    obj1.print();
    obj2.setx(100);
    obj2.print();
    return 0;
}