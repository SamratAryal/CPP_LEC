#include<iostream>
using namespace std;
int main()
{
char c,str[30];
cout<<"Enter any character:";
cin.get(c);
cin.get(str,6);
cout<<"\nThe entered cahracter is:";
cout.put(c);
cout<<str;
return 0;
}