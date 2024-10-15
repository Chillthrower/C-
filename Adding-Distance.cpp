#include<bits/stdc++.h>
using namespace std;

void addDistance(int feet1, int feet2, int inches1, int inches2, int &resultInches, int &resultFeet)
{
    resultInches = inches1 + inches2;
    resultFeet = feet1 + feet2 + (resultInches / 12);
    resultInches %= 12;
}

void addDistance(int feet1, int feet2, int &resultFeet)
{
    resultFeet = feet1 + feet2;
}

int main()
{
    int inches1 = 1, inches2 = 3;
    int feet1 = 1, feet2 = 7;
    int resultInches, resultFeet;
    
    addDistance(feet1, feet2, inches1, inches2, resultInches, resultFeet);
    cout    <<  "result Inches: "   <<  resultInches    <<  " result feet: " <<  resultFeet  <<  endl;

    addDistance(feet1, feet2, resultFeet);
    cout    <<  "result feet: " <<  resultFeet  <<  endl;

    return 0;
}