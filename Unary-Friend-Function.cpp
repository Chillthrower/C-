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

        friend void operator-(Count &c);

        void display()
        {
            cout    <<  "Count :    "   <<  value   <<  endl;
        }
};

void operator-(Count &c)
{
    c.value = -c.value;
}

int main()
{
    Count count(10);
    -count;
    count.display();

    return 0;
}