#include<bits/stdc++.h>
#include<string>

using namespace std;

void bubblesort(int x);

int main(){
    int n;
    cin>>n;
    string ara[n+1];
    int ara2[n+1];
    for(int i=0;i<n;i++){
        cin>>ara[i];
        ara2[i]=ara[i].length();
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(ara2[j]>ara2[j+1]){
                swap(ara[j],ara[j+1]);
                swap(ara2[j],ara2[j+1]);

            }
        }
    }
    for(int i=0;i<n-1;i++){
        if (ara[i+1].find(ara[i]) != std::string::npos) {
            continue;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        cout <<ara[i]<<endl;
    }
}
