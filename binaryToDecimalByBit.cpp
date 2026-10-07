#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int binary_to_Decimal(string &binary)
{
    int n=binary.length();
    int sum=0;
    for(int i=n-1;i>=0;i--)
    {
        char ch = binary[i];
        int num = ch-'0';
        sum=sum+num*(1<<(n-i-1));
    }
    return sum;
}
string decimal_to_Binary(int num)
{
    string result = "";
    while(num>0)
    {
        if(num%2==0)//even
        {
            result="0"+result;
        }
        else{//odd
            result="1"+result;
        }
        num = num>>1;// it means num=num/2;  num>>1 is right shift by 1
    }
    return result;
}
int main()
{
    string str;
    cout<<"Enter a number in binary form"<<endl;
    cin>>str;
    cout<<"Binary Form = "<<str<<endl;
    cout<<"Decimal Form = "<<binary_to_Decimal(str)<<endl;
    cout<<"Binary Form = "<<decimal_to_Binary(12)<<endl;
    cout<<"Binary Form = "<<decimal_to_Binary(72)<<endl;
}