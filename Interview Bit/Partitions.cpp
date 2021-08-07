int Solution::solve(int n, vector<int> &B) {
    int sum=0,ss=0;
    int C[n]={0};
    for(int i=0;i<n;i++){
        sum=sum+B[i];
    }
    if(sum%3 !=0){
        return 0;
    }
    sum=sum/3;
    for(int i=n-1;i>=0;i--){
        ss=ss+B[i];
        if(sum==ss){
            C[i]=1;
        }
    }
    for(int i=n-2;i>=0;i--){
        C[i]=C[i]+C[i+1];
    }
    int ans=0;
    ss=0;
    for(int i=0;i+2<n;i++){
        ss+=B[i];
        if(ss==sum){
            ans+=C[i+2];
        }
    }
    return ans;
}
