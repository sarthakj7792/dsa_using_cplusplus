#include<bits/stdc++.h>
using namespace std;
int power(int m,int n)
{
    if(n==0)
    return 1;
    else
    return m*power(m,n-1);
}
int powwer(int m,int n)
{
    if(n=0)
    return 1;
    if(n%2==0)
    return powwer(m*m,n/2);
    if(n%2!=0)
    return m*powwer(m*m,(n-1)/2);
}
int main()
{
    int m,n;
    cout<<"Enter no. and its power to find its power using recursion\n";
    cin>>m>>n;
    cout<<"Answer is "<<powwer(m,n)<<endl;
return 0;
}