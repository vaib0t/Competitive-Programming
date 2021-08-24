#include<bits/stdc++.h>
using namespace std;

string solve(int k){
    if(k%2==0){
        return "YES";
    }
    else{
        return "NO";
    }
}

int main(){
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;    
}