#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<"Entered number in binary = "<<n<<endl;
    int m = n;
    n = n | n>>1 ;
    n = n | n>>2 ;
    n = n | n>>4 ;
    n = n | n>>8 ;
    n = n | n>>16 ;// doing or operations to make all bits as 1
    m = m^n;// taking xor to flip bits
    cout<<"Flipped Bits number in binary = "<<m<<endl;   
    
}