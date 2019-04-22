#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n;
    cin>>n>>k;
    int ara[n][n];
    int ara2[n][n];
    char p;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cin>>p;
           if(p=='#')
                ara[i][j]=1;
           else if(p=='.')
                ara[i][j]=2;
           else
                ara[i][j]=3;
        }
    }
    /*for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cout<<ara[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;*/
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ara2[i][j]=0;
        }

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-(k-1);j++){
            bool check=1;
            for(int l=j,c=0;c<k;c++){
                if(ara[i][l++]!=2){
                    check=0;
                }
                if(check==0)
                    break;
            }
            if(check==1){
                for(int l=j,c=0;c<k;c++){
                    ara2[i][l++]++;
                }
            }
           /*if(ara[i][j]==2 && ara[i][j+1]==2 && ara[i][j+2]==2){
                ara2[i][j]++;
                ara2[i][j+1]++;
                ara2[i][j+2]++;
           }*/
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-(k-1);j++){
           bool check=1;
            for(int l=j,c=0;c<k;c++){
                if(ara[l++][i]!=2){
                    check=0;
                }
                if(check==0)
                    break;
            }
            if(check==1){
                for(int l=j,c=0;c<k;c++){
                    ara2[l++][i]++;
                }
            }
           /*if(ara[j][i]==2 && ara[j+1][i]==2 && ara[j+2][i]==2){
                ara2[j][i]++;
                ara2[j+1][i]++;
                ara2[j+2][i]++;
           }*/
        }
    }
    int ma=0;
    int row=0,coloumn=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(ara2[i][j]>ma){
                ma=ara2[i][j];
                row=i;
                coloumn=j;
           }
        }
    }
    cout<<row+1<<" "<<coloumn+1<<endl;


}
