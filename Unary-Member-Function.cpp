#include<bits/stdc++.h>
using namespace std;

class Count
{
    private:
        int value;
    
    public:
        Count(int v)
        {
            value = v;
        }

        void operator-()
        {
            value = -value;
        }

        void display()
        {
            cout    <<  "Value :    "   <<  value   <<  endl;
        }
};

int main()
{
    Count count(10);
    -count;
    count.display();
}