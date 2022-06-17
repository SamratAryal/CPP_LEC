#include<iostream>
using namespace std;

class unaryfriend
{
   private:
   int a,b,c;
   public:
 unaryfriend()
 {
    a=10;
    b=20;
    c=30;
 }
 void display()
 {
    cout<<"\na="<<a;
    cout<<"b="<<b;
    cout<<"c="<<c;
 }
void friend operator - (unaryfriend &u)
{
    u.a=-u.a;
    u.b=-u.b;
    u.c=-u.c;
    
}
};
int main()
{
    unaryfriend u1;
    cout<<"Before overloading\n:";
    u1.display();
    -u1;
    cout<<"\nAfter overloading:\n";
    u1.display();
    return 0;
}