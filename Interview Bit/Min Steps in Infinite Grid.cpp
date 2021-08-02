int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int n=A.size(), m=B.size(),sum=0;
        for(int i=1;i<n;i++){
            int k= abs(A[i]-A[i-1]);
            int z= abs(B[i]-B[i-1]);
            int o= max(k,z);
            sum=sum+o;
        }
        return sum;
}
