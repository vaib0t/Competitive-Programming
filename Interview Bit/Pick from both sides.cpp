int Solution::solve(vector<int> &A, int b) {
    int n=A.size();
    int sum=0,sum1=0,sum2=0;
    for(int i=0;i<b && i<n;i++){
        sum+=A[i];
    }
    sum2=sum;
    for(int i=0;i<b;i++){
        sum2=sum2-A[b-i-1]+A[n-i-1];
        if(sum2>sum){
            sum=sum2;
        }
    }
    return sum;
}
