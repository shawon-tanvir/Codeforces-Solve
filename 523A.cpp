#include<bits/stdc++.h>
using namespace std;
int main(){
    long a,b;
    cin>>a>>b;
    long p;
    p=b/a;
    if(b%a!=0){
        p++;
    }
    cout<<p<<endl;
    return 0;

}
