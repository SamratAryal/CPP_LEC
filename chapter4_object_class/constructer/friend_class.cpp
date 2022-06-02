#include<iostream>
using namespace std;

class myclass1
{
    friend class myclass2;
private:
   int x;

public:
myclass1(int a)
{
x=a;
}
    
};
 class myclass2
 {
public:
myclass2(myclass1 obj)
{
    cout<<"Private Member of myclass1 is :"<<obj.x<<endl;
}
 };
 int main()
 {
     myclass1 obj1(10);
     myclass2 obj2(obj1);
     return 0;
 }