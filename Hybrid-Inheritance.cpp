#include<bits/stdc++.h>
using namespace std;

class base
{
    public:
        void callBase()
        {
            cout    <<  "Base"  <<  endl;
        }
};

class derived1 : public base
{
    public:
        void displayderived1()
        {
            cout    <<  "derived1"  <<  endl;
        }
};

class derived2 : public base
{
    public:
        void displayderived2()
        {
            cout    <<  "derived2"  <<  endl;
        };
};

class hybrid : public derived1, public derived2
{
    public:
        void displayHybrid()
        {
            cout    <<  "hybrid"    <<  endl;
        }
};

int main()
{
    hybrid hy;
    hy.derived1::callBase();
    hy.displayderived1();
    hy.displayderived2();
    hy.displayHybrid();

    return 0;
}