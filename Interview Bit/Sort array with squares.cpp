vector<int> Solution::solve(vector<int> &A) {
    int n=A.size();
    vector<int> B;
    for(int i=0;i<n;i++){
        B.push_back(A[i]*A[i]);
    }
    sort(B.begin(),B.end());
    return B;
}
