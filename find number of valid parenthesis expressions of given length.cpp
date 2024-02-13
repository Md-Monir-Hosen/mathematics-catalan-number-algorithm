#include<bits/stdc++.h>
using namespace std;
unsigned long int binomialCoeff(unsigned int n,unsigned int k)
{
    unsigned long int res=1;
    if(k>n-k)
    {
        k=n-k;
    }
    for(int i=0;i<k;++i)
    {
        res*=(n-i);
        res/=(i+1);
    }
    return res;
}
unsigned long int catalan(unsigned int n)
{
    unsigned long int c=binomialCoeff(2*n,n);
    return c/(n+1);
}
unsigned long int findWays(unsigned n)
{
    if(n&1)
    {
        return 0;
    }
    return catalan(n/2);
}
int main()
{
    int n = 6;
    cout << "Total possible expressions of length "
         << n << " is " << findWays(6);
    return 0;
}
