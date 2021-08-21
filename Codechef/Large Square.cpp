#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,sq,k;
        cin>>a>>b;
        sq=sqrt(a);
        k=sq*b;
        cout<<k<<"\n";
    }
    return 0;
}
