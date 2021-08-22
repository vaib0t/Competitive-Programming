vector<int> Solution::wave(vector<int> &A) {
    int n=A.size();
    sort(A.begin(),A.end());
    if(!(n%2==0)){
    for(int i=0;i<n-1;i=i+2){
        if(A[i+1]>A[i]){
        swap(A[i],A[i+1]);
        }
    }
    }
    else{
        for(int i=0;i<n;i=i+2){
        if(A[i+1]>A[i]){
        swap(A[i],A[i+1]);
        }
    }

    }
    return A;
}
