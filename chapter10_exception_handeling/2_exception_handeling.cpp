#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter values of a and b:";
    cin>>a>>b;
    int x=a/(a-b);
    cout<<"Value of x is:"<<x<<endl;
    return 0;
}