#include<bits/stdc++.h>
using namespace std;

template <typename T>
T arithmetic(T a, T b, char op)
{
    switch (op)
    {
        case '+':
            return a + b;
            break;
        
        case '-':
            return a - b;
            break;
        
        case '*':
            return a * b;
            break;
        
        case '/':
            return a / b;
            break;
        
        default:
            return 0;
            break;
    }
}

int main()
{
    int a, b;
    char op;

    cout    <<  "enter first number :   "   <<  endl;
    cin >>  a;

    cout    <<  "enter second number :  "   <<  endl;
    cin >>  b;

    cout    <<  "Choose operator :  "   <<  endl;
    cin >>  op;

    cout << "Addition of int: " << arithmetic(a, b, op) << endl;
}