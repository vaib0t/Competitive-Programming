#include<bits/stdc++.h>
using namespace std;

void solve(){
     int p,m,q,count=0,check=0;
        cin>>p>>m>>q;
        int pass[p+1];
        bool ans=true;
        for(int j=0;j<=p;j++){
            pass[j]=0;
        }
        for(int j=0;j<q;j++){
            char s;
            int l;
            cin>>s>>l;
           // cout<<s<<" "<<l<<endl;
            if(s=='+'){
                pass[l]+=1;
                count++;
            }
            else if(s=='-'){
                pass[l]-=1;
                count--;
                if(pass[l]<0){
                    ans=false;
                }
            }
            if(count>m || count<0){
                ans=false;
            }
        }
        if(ans) cout<<"Consistent\n";
        else cout<<"Inconsistent\n";
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
       solve();
    }
    return 0;
}