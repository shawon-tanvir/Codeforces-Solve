#include<iostream>
using namespace std;
int main()
{
    int ara[6];
    int sum1,sum2;
    for(int i=0;i<6;i++){
        cin>>ara[i];
    }
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(i==j)
                continue;
            for(int k=0;k<6;k++){
                sum1=0;
                sum2=0;
                if(i==k || j==k)
                    continue;
                sum1=ara[i]+ara[j]+ara[k];
                for(int l=0;l<6;l++){
                    if(l!=i&&l!=j&&l!=k){
                        sum2+=ara[l];
                    }
                }
                //cout<<sum1<<" " <<sum2<<endl;
                if(sum1==sum2){
                    cout<<"yes"<<endl;
                    return 0;                }
            }
        }

    }
    cout<<"no"<<endl;
}
