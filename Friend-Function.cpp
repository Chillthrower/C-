#include<bits/stdc++.h>
using namespace std;

class Sample
{
    private:
        int cool;
    
    public:
        Sample(int a)
        {
            cool = a;
        }

        friend void display(Sample s);
};

void display(Sample s)
{
    cout    <<  "Friend cool :     "   <<  s.cool <<  endl;
}

int main()
{
    int a;
    cout    <<  "input number :     "   <<  endl;
    cin >>  a;

    Sample obj(a);

    display(obj);
}