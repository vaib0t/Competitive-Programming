#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> A(n);
    vector<int> B(m);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<m;i++){
        cin>>B[i];
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int sum=0;
    int i=0,j=0;
    while(i<n && j<m){
        if(abs(A[i]-B[j])<=k){
            sum++;
            i++;
            j++;
        }
        else if(A[i]<B[j]){
            i++;
        }
        else{
            j++;
        }
    }
    cout<<sum;
    return 0;
}