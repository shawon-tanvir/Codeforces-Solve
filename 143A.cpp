#include<iostream>
using namespace std;
int main()
{
    int n,sum,countele=0;
    cin>>n;
    int ara[n][3];
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=0;j<3;j++){
            cin>>ara[i][j];
            sum+=ara[i][j];
        }
        if(sum>=2){
            countele++;
        }
    }
    cout<<countele<<endl;
    return 0;
}
