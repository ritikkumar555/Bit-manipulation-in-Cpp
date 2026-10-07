#include<iostream>
using namespace std;
int main()
{
    int arr[] = {4,1,2,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = 0;
    for(int i=0;i<n;i++)// using property of xor(^) operator same^same=0 but 0^x =x
    {
        res = res^arr[i];
    }
    cout<<"Single Number = "<<res;
}