int Solution::firstMissingPositive(vector<int> &A) {
    int n=A.size();
    sort(A.begin(),A.end());
    int start = 0;
    for(int i=0;i<n;i++){
        if(A[i]>0){
            start = i;
            break;
        }
    }
    int check = 1;
    for(int i=start;i<n;i++){
        if(A[i]!=check){
            return check;
        }
        check++;
    }
    return check;
}
