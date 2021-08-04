int Solution::maxSubArray(const vector<int> &A) {
    int n=A.size(),ans=0,m=INT_MIN;
    for(int i=0;i<n;i++){
        ans+=A[i];
        m=max(m,ans);
        if(ans<0){
            ans=0;
        }
    }
    return m;
}
