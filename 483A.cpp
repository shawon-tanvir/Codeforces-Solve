#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    sort(ara,ara+n);
    if(n%2==0){
        cout<<ara[n/2-1]<<endl;
    }
    else
        cout<<ara[n/2]<<endl;
    return 0;
}
