#include<bits/stdc++.h>
using namespace std;
int main()
{
    //while(1){
    int k,n,s,p;
    cin>>k>>n>>s>>p;
    long temp,temp1;
    if(n<s)
        temp=1;
    else{
        if(n%s==0){
            temp=n/s;
        }
        else
            temp=n/s+1;
    }
    temp1=k*temp;
    //cout<<temp1<<endl;
    if(temp1%p==0)
        cout<<temp1/p<<endl;
    else
        cout<<temp1/p+1<<endl;
   // }
    return 0;
}
