#include<iostream>
using namespace std;
 class person{
    protected:
        string name;
        int marks;
        int roll;
    public:
        class MARKS{};
        class ROLL{};

        person(string n, int m, int r){
            name=n;
            marks=m;
            roll=r;
        }
        void check(){
            if (roll<1)
            {
                throw ROLL();
            }
            else if (marks>100)
            {
                throw MARKS();
            }
            else{
                cout<<"Name: "<<name<<endl;
                cout<<"Marks: "<<marks<<endl;
                cout<<"Roll: "<<roll<<endl;
            }
            
            
        }
 };

 int main(){
    try{
        // person("prabin",224,12);
        person p("prabin",90,0);
        p.check();
    }
    catch(person::MARKS){
        cout<<"Exception: Marks entered more than full marks."<<endl;
    }
    catch(person::ROLL){
        cout<<"Exception: Roll cannot be negative"<<endl;
    }

 }