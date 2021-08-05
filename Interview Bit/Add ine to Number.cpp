vector<int> Solution::plusOne(vector<int> &A) {
    int n=A.size(),carry=1;
    
    for(int i=n-1;i>=0;i--){
        if(A[i]>8 && carry==1){
            A[i]=0;
            if(i==0 && A[i]==0){
                A.insert(A.begin(),1);
            }
        }
        else{
            A[i]=A[i]+carry;
            carry=0;
            break;
        }
        
    }
    for(int i=0;i<n;i++){
        if(A[0]==0){
        A.erase(A.begin());
        }
        else
        break;
    }
    return A;
}
