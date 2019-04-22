#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ara[n+1][m+1];
    char p;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>p;
            if(p=='*')
                ara[i][j]=9;
            else if(p=='.')
                ara[i][j]=0;
            else
                ara[i][j]=p-48;
        }
    }

    int count1;
    bool check;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            count1=0;
            check=0;
            if(ara[i][j]==9)
                continue;
            else if(i==0&&j==0){
                if(ara[i][j+1]==9){
                    count1++;

                }
                if(ara[i+1][j]==9){
                    count1++;

                }
                if(ara[i+1][j+1]==9){
                    count1++;

                }

                if(count1!=ara[i][j]){

                    check=1;
                    break;
                }
            }

            else if(i==0&&j==m-1){
                if(ara[i][j-1]==9)
                    count1++;
                if(ara[i+1][j]==9)
                    count1++;
                if(ara[i+1][j-1]==9)
                    count1++;
                if(count1!=ara[i][j]){

                    check=1;
                    break;
                }
            }
            else if(i==n-1&&j==0){
                if(ara[i][j+1]==9)
                    count1++;
                if(ara[i-1][j]==9)
                    count1++;
                if(ara[i-1][j+1]==9)
                    count1++;
                if(count1!=ara[i][j]){

                    check=1;
                    break;
                }
            }
            else if(i==n-1&&j==m-1){
                if(ara[i][j-1]==9)
                    count1++;
                if(ara[i-1][j]==9)
                    count1++;
                if(ara[i-1][j-1]==9)
                    count1++;
                if(count1!=ara[i][j]){

                    check=1;
                    break;
                }
            }
            else if(i==0&&j!=0 && j!=m-1){
                if(ara[i][j+1]==9)
                    count1++;
                if(ara[i][j-1]==9)
                    count1++;

                if(ara[i+1][j]==9)
                    count1++;
                if(ara[i+1][j-1]==9)
                    count1++;
                if(ara[i+1][j+1]==9)
                    count1++;
                if(count1!=ara[i][j]){

                    check=1;
                    break;
                }

            }
            else if(i==n-1&&j!=0 && j!=m-1){
                if(ara[i][j+1]==9)
                    count1++;
                if(ara[i][j-1]==9)
                    count1++;

                if(ara[i-1][j]==9)
                    count1++;
                if(ara[i-1][j-1]==9)
                    count1++;
                if(ara[i-1][j+1]==9)
                    count1++;
                if(count1!=ara[i][j]){

                    check=1;
                    break;
                }

            }
            else if(j==0&&i!=0 && i!=n-1){
                if(ara[i][j+1]==9)
                    count1++;
                if(ara[i-1][j]==9)
                    count1++;

                if(ara[i+1][j]==9)
                    count1++;
                if(ara[i+1][j+1]==9)
                    count1++;
                if(ara[i-1][j+1]==9)
                    count1++;
                if(count1!=ara[i][j]){

                    check=1;
                    break;
                }

            }
            else if(j==m-1&&i!=0 && i!=n-1){
                if(ara[i][j-1]==9)
                    count1++;
                if(ara[i-1][j]==9)
                    count1++;

                if(ara[i+1][j]==9)
                    count1++;
                if(ara[i+1][j-1]==9)
                    count1++;
                if(ara[i-1][j-1]==9)
                    count1++;
                if(count1!=ara[i][j]){

                    check=1;
                    break;
                }

            }
            else if(i!=0&&j!=0&&i!=n-1&&j!=m-1){
                if(ara[i][j+1]==9)
                    count1++;
                if(ara[i][j-1]==9)
                    count1++;

                if(ara[i+1][j]==9)
                    count1++;
                if(ara[i-1][j]==9)
                    count1++;
                if(ara[i-1][j-1]==9)
                    count1++;
                if(ara[i-1][j+1]==9)
                    count1++;
                if(ara[i+1][j-1]==9)
                    count1++;
                if(ara[i+1][j+1]==9)
                    count1++;
                if(count1!=ara[i][j]){

                    check=1;
                    break;
                }
            }


        }
        if(check==1)
            break;
    }
    if(check==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

