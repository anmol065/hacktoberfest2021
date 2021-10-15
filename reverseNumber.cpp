// reverse a number
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n,rn=0,j;
    cin>>n;
    while (n>0)
    {
        j = n%10;
        rn = rn*10 + j;
        n = (n-j)/(10);//or n=n/10 as n is int!
    }  
    cout<<rn<<endl;
    return 0;
}
