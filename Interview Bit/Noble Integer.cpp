int Solution::solve(vector<int> &A) {
    int n=A.size();
    map<int,int> B;
    sort(A.begin(),A.end());
    for(int i=0;i<n;i++){
        B[A[i]]++;
    }
    int sum=n;
    for(auto i:B){
        sum=sum-i.second;
        B[i.first]=sum;
    }
    for(auto i:B){
        if(i.first==i.second){
            return 1;
        }
    }
    return -1;
}
