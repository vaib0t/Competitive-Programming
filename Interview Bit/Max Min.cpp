int Solution::solve(vector<int> &A) {
    int n=A.size(),m1=INT_MIN,m2=INT_MAX;
    for(int i=0;i<n;i++){
        m1=max(m1,A[i]);
        m2=min(m2,A[i]);
    }
    int ans=m1+m2;
    return ans;
}
