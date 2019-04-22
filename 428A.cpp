#include<iostream>
using namespace std;
int main()
{
    int n,k,temp,brad=0,res=0,cou=0,minus1=-1;
    bool bol=true;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        temp=0;
        cin>>temp;
        if(res+temp<=8){
            brad=brad+res+temp;
            res=0;
        }
        else{
            brad=brad+8;
            res=res+temp-8;
        }
        if(bol){
            cou++;
            if(brad>=k){
                bol=false;
            }
        }
    }
    if(cou<=n && brad>=k)
        cout<<cou<<endl;
    else
        cout<<minus1<<endl;
    return 0;

}
