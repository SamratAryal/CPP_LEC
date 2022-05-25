#include<iostream>
using namespace std;

class iteminfo
{
    private:
    int itemid;
    float itemcost;
    public:
    void setdata(int item, float cost)
    {
        itemid=item;
        itemcost=cost;
    }
    void showdata()
    {
        cout<<"\nItem id="<<itemid;
         cout<<"\nItem cost="<<itemcost<<endl;
    }

};
int main()
{
    iteminfo i1, i2;
    i1.setdata(20,30);
    i2.setdata(50,60);

    cout<<"\nInformation on first item";
    i1.showdata();

    cout<<"\nInformation on second item";
    i2.showdata();
    return 0;
}