#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        if(x%3==0 || ((x%3)%7==0)){
            cout<<"YES"<<endl;
            continue;
        }
        if(x%7==0 || ((x%7)%3==0)){
            cout<<"YES"<<endl;
            continue;
        }
        if(x<3){
            cout<<"NO"<<endl;
            continue;
        }
        bool check=false;
        for(int i=1;i<=34;i++){
            int k;
            for(int j=1;j<=105;j++){

                k=3*i+7*j;
                if(k==x){
                    cout<<"YES"<<endl;
                    check=true;
                    break;
                }
                if(k>x){
                    //cout<<"NO"<<endl;
                    break;
                }
            }
            if(check==true)
                break;

        }
        if(check==false)
            cout<<"NO"<<endl;
    }
    return 0;
}
