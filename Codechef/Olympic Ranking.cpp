#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++){
        int s1=0,s2=0;
        for(int j=0;j<6;j++){
            cin>>A[j];
            if(j>=3){
                s2+=A[j];
            }
            else{
                s1+=A[j];
            }
        }
        if(s1>s2){
            cout<<"1\n";
        }
        else{
            cout<<"2\n";
        }
    }
    return 0;
}