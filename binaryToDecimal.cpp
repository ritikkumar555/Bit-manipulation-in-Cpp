#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    string num;
    cout<<"Enter a number in binary form"<<endl;
    cin>>num;
    cout<<"Binary Form = "<<num<<endl;
    int sum = 0;
    int n = num.length();
    for(int i = n-1; i>=0 ; i--)
    {
        char ch = num[i];
        int k=ch-48;
        sum+= k * (int)pow(2,n-i-1);
    }
    cout<<"Decimal Form = "<<sum;
}