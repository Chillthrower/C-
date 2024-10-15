#include<bits/stdc++.h>
using namespace std;

class Complex
{
    private:
        int real, img;

    public:
        Complex(int rl, int ig)
        {
            real = rl;
            img = ig;
        }

        Complex operator+(Complex &c)
        {
            return Complex(real + c.real, img + c.img);
        }

        Complex operator-(Complex &c)
        {
            return Complex(real - c.real, img - c.img);
        }

        void display()
        {
            cout    <<  "Real: "    <<  real    <<  " img: "    <<  img <<  endl; 
        }
};

int main()
{
    Complex c1(1, 2), c2(3, 4);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;

    cout    <<  "Sum: " <<  endl;
    sum.display();

    cout    <<  "Diff: "    <<  endl;
    diff.display();

    return 0;
}