#include<bits/stdc++.h>
#define ll long long
using namespace std;
int binaryExponentiation(int x,int n){
    if(n==0)
        return 1;
    else if(n%2==0)
        return binaryExponentiation(x*x,n/2);
    else
        return x*binaryExponentiation(x*x,(n-1)/2);
}
int main()
{
    int n,m,k;
    int rem;
    cin>>n>>m;
    //cout<<n<<" "<<m<<endl;
    //a=binaryExponentiation(2,27);
    //cout<<a;
    if(n>=27){
        cout<<m<<endl;
    }
    else{
        k=binaryExponentiation(2,n);
        rem=m%k;
        cout<<rem<<endl;
    }
}
