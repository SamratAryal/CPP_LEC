//simple example of constructor
#include<iostream>
using namespace std;

class counter
{
private:
int count;
public:
//constructor initilize value of count to 0
//It has same name as class name
counter()
{
    count=0;
}
void inc_count()
{
    count++;
}
int ret_count()
{
    return count;
}
};
int main()
{
    counter c1,c2;    //count is initialized to 0 automticlly
    cout<<"C1="<<c1.ret_count();
    cout<<"C2="<<c2.ret_count();
    
    return 0;

}