#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<int,int> A;
    for(int i=0;i<n;i++){
        A.clear();
        for(int j=0;j<4;j++){
            int temp;
            cin>>temp;
            A[temp]++;
        }
        if(A.size()>2){
            cout<<"2\n";
            continue;
        }
        if(A.size()<=1){
            cout<<"0\n";
            continue;
        }
        int count = 0;
        for(auto j : A){
            count = j.second;
            break;
        }
        if(count == 2){
            cout<<"2\n";
            continue;
        }else{
            cout<<"1\n";
            continue;
        }
        
    }
    return 0;
}