//c++program to demonstrate cin.get()
#include<iostream>
using namespace std;
int main()
{
    char name[100];
    cin.get(name,20);
    //cin>>name;
    cout<<name;
    return 0;
}