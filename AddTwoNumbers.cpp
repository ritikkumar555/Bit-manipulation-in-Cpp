#include<iostream>
using namespace std;
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
    int a , b ;
    cout<<"Enter A = "<<endl;
    cin>>a;
    cout<<"Enter B = "<<endl;
    cin>>b;
    int c = a^b;
   // c = c ^ 1;
   cout<<a<<" = "<<decimal_to_Binary(a)<<endl;
   cout<<b<<" = "<<decimal_to_Binary(b)<<endl;
   cout<<c<<" = "<<decimal_to_Binary(c)<<endl;
     c = c<<2;
   cout<<c<<" = "<<decimal_to_Binary(c)<<endl;
   c = c | 1;
   cout<<c<<" = "<<decimal_to_Binary(c)<<endl;
   
}