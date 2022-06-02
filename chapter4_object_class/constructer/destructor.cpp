#include<iostream>
using namespace std;

class helloworld
{
    public:
    helloworld()
{
    cout<<"Constructor is called"<<endl;

}
~helloworld()
{
    cout<<"Destructor is called:"<<endl;

}
void display()
{
    cout<<"Hello world"<<endl;

}
};
int main()
{
    helloworld obj;
    obj.display();
    return 0;
}