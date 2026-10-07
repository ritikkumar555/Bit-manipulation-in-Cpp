#include<iostream>
using namespace std;
// int setKthBitOn(int n, int k)
// {
//     int mask = 1<<k // removing k bits from n
//      (n | mask) ;
// }
int main()
{
    int n,k;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    cout<<"Enter k "<<endl;
    cin>>k;
    int mask = 1<<k;
    int m = n | mask;
    cout<<m;
}