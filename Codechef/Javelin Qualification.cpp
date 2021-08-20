#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int q,m,x,k=0;
        cin>>q>>m>>x;
        vector<int> id;
        vector<int> A;
        for(int j=0;j<q;j++){
            int temp;
            cin>>temp;
            A.push_back(temp);
            if(A[j]>=m){
                id.push_back(j+1);
                k++;
                x--;
            }
        }
        for(int j=0;j<q;j++){
            if(A[j]>=m){
                A[j]=0;
            }
        }
        if(x<=0){
            cout<<k<<" ";
            for(int j=0;j<k;j++){
                cout<<id[j]<<" ";
            }

        }
        if(x>0){
            for(int j=0;j<x;j++){
                int index= max_element(A.begin(),A.end())-A.begin();
                id.push_back(index+1);
                A[index]=0;
                k++;
            }
            sort(id.begin(),id.end());
            cout<<k<<" ";
            for(int j=0;j<k;j++){
                cout<<id[j]<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}