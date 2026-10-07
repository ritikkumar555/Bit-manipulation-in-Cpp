#include<iostream>
using namespace std;
int count_Set_Bits(int n)
{
    return __builtin_popcount(n);
}
int count_Set_Bits2(int n)
{
    int count=0;
    while(n>0)
    {
        count++;
        n=(n & (n-1));
    }
    return count;
}
int main()
{
    int num;
    cout<<"Enter a number(in Decimal System)"<<endl;
    cin>>num;
    cout<<"In-Built Method : No. of Set Bits = "<<count_Set_Bits(num)<<endl;// num ke binary represenatation me kitne 1's hai
    cout<<"Customized Method : No. of Set Bits = "<<count_Set_Bits(num)<<endl;// num ke binary represenatation me kitne 1's hai
}