//after overloading an oprator it can be applied to an object in the same way as it is applid to basic type
#include<iostream>
using namespace std;

class count
{
private:
int value;
public:
count()
{
    value=5;
}
void operator ++()
{
    ++value;
}
void display()
{
    cout<<"Value is:"<<value<<endl;
}

};
int main()
{
    count c1;
    c1.display();
    ++c1;
    c1.display();
   
    return 0;
}

