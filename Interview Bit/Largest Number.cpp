bool comparison(int& a, int& b){
    string A = to_string(a);
    string B = to_string(b);
    if(A+B > B+A){
        return true;
    }
    return false;
}

string Solution::largestNumber(const vector<int> &arr) {
    vector<int> A=arr;
    sort(A.begin(),A.end(),comparison);
    int n = A.size();
    string ans = "";
    if(n>0 && A[0] == 0){
        return "0";
    }
    for(int i=0;i<n;i++){
        ans+=to_string(A[i]);
    }
    return ans;
}
