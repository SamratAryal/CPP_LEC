#include<iostream>
using namespace std;

class samrat
{
    public:
    samrat()
    {
        cout<<"From constructor samrat\n";
    }
    ~samrat()
    {
        cout<<"From destructor";
    }
};
int main()
{
    samrat();
}

