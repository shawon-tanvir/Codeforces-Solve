#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ara[n+7],ara2[n+7],ara3[n+7];
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    int p=0,count=0;
    bool check;
    for(int i=0;i<n;i++){
        check=0;
        for(int j=0;j<p;j++){
            //cout<<"in"<<endl;
            if(ara2[j]==ara[i]){
                check=1;
                break;
            }
        }
        if(check==0){
            count++;

            ara2[p]=ara[i];
            ara3[p++]=i+1;
            /*cout<<ara2[p-1]<<endl;
            cout<<ara3[p-1]<<endl;*/
        }
        if(count==k){
            cout<<"YES"<<endl;
            for(int j=0;j<p;j++){
                cout<<ara3[j]<<" ";
            }
            cout<<endl;
            break;
        }
    }
    if(count!=k)
        cout<<"NO"<<endl;
}
