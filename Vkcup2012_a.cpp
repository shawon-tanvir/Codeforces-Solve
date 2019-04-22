#include<iostream>
using namespace std;
int main()
{
    int n,k,adv=0;

    cin>>n>>k;
    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    if(ara[k-1]==0){
        for(int i=k-2;i>=0;i--){
            if(ara[i]>0)
                adv++;
        }
        cout<<adv<<endl;
        return 0;
    }
    else
        adv=k;
    //cout<<adv<<endl;
    for(int i=k;i<n;i++){
        if(adv!=0 && ara[i]==ara[k-1])
            adv++;
        else
            break;
    }
    cout<<adv<<endl;
}

