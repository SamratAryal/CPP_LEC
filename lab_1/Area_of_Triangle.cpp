//Program in c++ to compute area of triangle
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,s,area;
    cout<<"Enter length of triagle:"<<endl;
    cin>>a;
    cout<<"Enter breadth of triangle:"<<endl;
    cin>>b;
    cout<<"Enter height of triangle"<<endl;
    cin>>c;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    cout<<"The area of triangle is:"<<area<<endl;

    return 0;


}