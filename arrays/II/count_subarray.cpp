int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // better

    // int n = arr.size();
    // int count=0;
    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     for(int j=i;j<n;j++){
    //         sum+=arr[j];
    //         if(sum==k){
    //             count++;
    //         }
    //     }
    // }
    // return count;

    // optimal

    int n = arr.size();
    int presum = 0;
    int count = 0;
    map<int,int> mpp;
    mpp[0]=1;
    for(int i=0;i<n;i++){
        presum+=arr[i];
        int remove = presum - k;
        count+=mpp[remove];
        mpp[presum]+=1;
    }
    return count;

}