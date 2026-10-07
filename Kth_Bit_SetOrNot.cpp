#include<iostream>
using namespace std;
bool isKthBitSetORNot(int n, int k)
{
    n = n>>k; // removing k bits from n
    return (n%2==1);
}
int main()
{
    int n,k;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    cout<<"Enter k "<<endl;
    cin>>k;
    if(isKthBitSetORNot(n,k)) cout<<k<<"th bit is set";
    else cout<<k<<"th bit is not set";
}