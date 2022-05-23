#include<iostream>
using namespace std;
int main()
{
    int height,base;
    float area;
    cout<<"Enter value of height:";
    cin>>height;
    cout<<"Enter value of base:";
    cin>>base;
    area=0.5*base*height;
    cout<<"The area of triangle is:"<<area;
    return 0;
}