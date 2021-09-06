#include<bits/stdc++.h>
using namespace std;
//taylor series is used to find e to the power x for n terms.
//for example e to the power one is 2.7 so we can find that using taylor series .
//in this program n is used for accuracy.
int e(int x,int n)
{
    static int p,f;
    p=f=1;
    int r;
    if(n==0)
    return 1;
    else
    r=e(x,n-1);
    p=p*x;f=f*n;
    return r+(p/f);
}
int e_short(int x,int n)
{
    static int s=1;
    if(n==0)
    return s;
    s=1+x/n*s;
    return e_short(x,n-1);
}
int e_recursive(int x,int n)
{
    double s=1;
    int i;
    double num=1,den=1;
    for(i=1;i<=n;i++)
    {
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;
}
int main()
{
    
return 0;
}