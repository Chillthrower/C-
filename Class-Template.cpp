#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Max
{
    public:
        T findMax(T a, T b)
        {
            return (a > b) ? a : b;
        }
};

int main()
{
    Max<int> intMax;
    cout    <<  "int max    :   "   <<  intMax.findMax(3, 2)    <<  endl;

    Max<float> floatMax;
    cout    <<  "float max  :   "   <<  floatMax.findMax(3.5, 4.5)  <<  endl;

    return 0;
}