#include<iostream>
using namespace std;
 void TurnOffKthBit(int n, int k)
 {
      int mask = 1<<k ;// removing k bits from n
      mask = ~mask;
      n = n & mask;
      cout<<n;
 }
int main()
{
    int n,k;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    cout<<"Enter k "<<endl;
    cin>>k;
    int mask = 1<<k;
    int m = n | mask;
    TurnOffKthBit(n,k);
}