vector<vector<int> > Solution::solve(int A) {
    vector<int> B;
    vector<vector<int>> P;
    int prev = 1;
    for(int j=0;j<A;j++){
        B.clear();
        for (int i = 1; i <= j; i++) {
            // nCr = (nCr-1 * (n - r + 1))/r
            int curr = (prev * (j - i + 1)) / i;
            B.push_back(curr);
            prev = curr;
        }
        P.push_back(B);
        
        
    }
    for(int i=0;i<A;i++){
        P[i].insert(P[i].begin(),1);
    }
    return P;
}