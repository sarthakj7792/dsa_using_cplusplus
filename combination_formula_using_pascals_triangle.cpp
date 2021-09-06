#include<bits/stdc++.h>
using namespace std;
int c(int n,int r)
{
    if(r==0 ||n==r)
    return 1;
    else 
    return c(n-1,r-1)+c(n-1,r);
}
int main()
{
    cout<<c(4,1)<<endl;
return 0;
}