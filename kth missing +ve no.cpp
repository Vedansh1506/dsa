// brute
int missingK(vector < int > vec, int n, int k) {
    // Write your code here.
    for(int i=0;i<n;i++){
        if(vec[i]<=k) k++;
        else break;
    }
    return k;   
}

// optimal
int missingK(vector < int > vec, int n, int k) {
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        int missing = vec[mid] - (mid+1);
        if(missing<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return k+high+1; // return ans = arr[high]+more
                     // more = k-missing 
                     // missing = arr[high]-(high+1)
                     // ans = arr[high] + k - (arr[high] - (high+1))
                     // ans = k + high + 1
}
