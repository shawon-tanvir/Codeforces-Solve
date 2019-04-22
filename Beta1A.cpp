#include<iostream>
using namespace std;
int main()
{
    long long n,m,a,t,s;
    cin>>n>>m>>a;
        t=n/a;
        s=m/a;
    if(n%a!=0)
        t=t+1;
    if(m%a!=0)
        s=s+1;
    cout<<t*s<<endl;
    return 0;
}
