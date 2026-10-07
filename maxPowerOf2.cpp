#include<iostream>
using namespace std;
int max_Power_Of_2(int n)
{
    
    n = n | (n>>1);
    n = n | (n>>2);
    n = n | (n>>4);
    n = n | (n>>8);
    n = n | (n>>16);
    return (n+1)>>1;
}
int main()
{
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    cout<<"Entered number = "<<n<<endl;
    int temp;
    int m=n;
    while(n>0)
    {
        temp=n;
        n=(n & (n-1));
    }
    cout<<"Maximum Power of 2 just less than above number is = "<<temp<<endl; 
    cout<<max_Power_Of_2(m);
}