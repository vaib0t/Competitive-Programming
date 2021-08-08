int Solution::perfectPeak(vector<int> &A) {
    int n=A.size();
    vector<int> t(n);
    int d=A[0];
    for(int i=1;i<n;i++){
        if(A[i]>d){
            t[i]=1;
            d=A[i];
        }
    }
    int b=A[n-1];
    for(int i=n-2;i>0;i--){
        if(A[i]<b){
            if(t[i]==1){
                return 1;
            }
            b=A[i];
        }
    }
    return 0;
}
