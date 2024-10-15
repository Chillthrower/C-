#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cout    <<  "enter first number:    "   <<  endl;
    cin >>  a;

    cout    <<  "enter second number :  "   <<  endl;
    cin >>  b;

    try
    {
        if (b == 0)
        {
            throw runtime_error("Diviion by zero");
        }
        cout    <<  "result:    "   <<  a / b   <<  endl;
        
    }
    catch(runtime_error &e)
    {
        cout    <<  e.what()    <<  endl;
    }

    return 0;
    
}