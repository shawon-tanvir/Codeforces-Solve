#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int div=10;
    int k;
    for(int i=0;;i++){
        if(n%div>9){
            div=div*10;
        }

        else{
            if(n%div==0){
                break;
            }
            else if(n%div>5){
                k=10-(n%div);
                n=n+k;
            }
            else{
                n=n-(n%div);
            }
            break;
        }
    }
    cout<<n<<endl;
}
