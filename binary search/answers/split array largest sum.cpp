int calcPartitions(vector<int> a, int sum){
    int n = a.size();
    int partition = 1;
    int totalsum = 0;

    for(int i=0;i<n;i++){
        if(totalsum+a[i]<=sum){
            totalsum+=a[i];
        }
        else{
            partition++;
            totalsum = a[i];
        }
    }
    return partition;
}
int largestSubarraySumMinimized(vector<int> a, int k) {
    int low = *max_element(a.begin(),a.end());
    int high = accumulate(a.begin(),a.end(),0);

    while(low<=high){
        int mid = (low+high)/2;

        if(calcPartitions(a,mid)<=k){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}

// book allocation , split array largest sum, painter's partition - all are same