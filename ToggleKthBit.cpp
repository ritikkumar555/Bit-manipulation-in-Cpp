#include<iostream>
using namespace std;
 void ToggleKthBit(int n, int k)
 {
      int mask = 1<<k ;// removing k bits from n
      cout<<(n^mask);
 }
int main()
{
    int n,k;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    cout<<"Enter k "<<endl;
    cin>>k;
    ToggleKthBit(n,k);
}