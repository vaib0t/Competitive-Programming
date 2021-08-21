#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2==0){
        int k=(n*n)/2;
        cout<<k;
    }
    else{
        int k1=((n*n)/2)-1;
        cout<<k1;
    }
    return 0;
}
