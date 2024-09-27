// brute
int findDays(vector<int> &weights, int capacity){
    int days = 1;
    int load = 0;
    int n = weights.size();
    for(int i=0;i<n;i++){
        if(load + weights[i]>capacity){
            days += 1;
            load = weights[i];
        }
        else{
            load += weights[i];
        }
    }
    return days;
}
int leastWeightCapacity(vector<int> &weights, int d)
{
    int n = weights.size();
    int maxi = *max_element(weights.begin(),weights.end());
    int summ = accumulate(weights.begin(),weights.end(),0);

    for(int i=maxi;i<=summ;i++){
        if(findDays(weights,i)<=d){
            return i;
        }
    }
    return -1;
}

// optimal
int findDays(vector<int> &weights, int capacity){
    int days = 1;
    int load = 0;
    int n = weights.size();
    for(int i=0;i<n;i++){
        if(load + weights[i]>capacity){
            days += 1;
            load = weights[i];
        }
        else{
            load += weights[i];
        }
    }
    return days;
}
int leastWeightCapacity(vector<int> &weights, int d)
{
    int n = weights.size();
    int low = *max_element(weights.begin(),weights.end());
    int high = accumulate(weights.begin(),weights.end(),0);

    while(low<=high){
        int mid = (low+high)/2;
        if(findDays(weights,mid)<=d){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return low;
}