#include<iostream>
using namespace std;
int main()
{
    int n;
    int x=0;
    cin>>n;
    while(n){
        string ch;
        cin>>ch;
        if(ch=="--X" || ch=="X--"){
            x--;
        }
        else if(ch=="++X" || ch=="X++"){
            x++;
        }
        n--;
    }
    cout<<x<<endl;
    return 0;
}
