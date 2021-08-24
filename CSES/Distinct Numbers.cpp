#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<int> A;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        A.insert(temp);
    }
    cout<<A.size();
    return 0;
}