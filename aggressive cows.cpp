// brute
bool canWePlace(vector<int> &stalls, int dist, int cows){
    int cntCows=1;
    int last = stalls[0];
    int n = stalls.size();
    for(int i=1;i<n;i++){
        if(stalls[i]-last>=dist){
            cntCows++;
            last = stalls[i];
        }
        if(cntCows>=cows) return true;
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    int n = stalls.size();
    sort(stalls.begin(),stalls.end());
    int limit = stalls[n-1] - stalls[0];
    for(int i=1;i<=limit;i++){
        if(canWePlace(stalls,i,k)==false){
            return (i-1);
        }
    }
    return limit;
}

// optimal
bool canWePlace(vector<int> &stalls, int dist, int cows){
    int cntCows=1;
    int load = stalls[0];
    int n = stalls.size();
    for(int i=1;i<n;i++){
        if(stalls[i]-load>=dist){
            cntCows++;
            load = stalls[i];
        }
        if(cntCows>=cows) return true;
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    int n = stalls.size();
    sort(stalls.begin(),stalls.end());
    int low = 1;
    int high = stalls[n-1] - stalls[0];
    while(low<=high){
        int mid  = (low+high)/2;
        if(canWePlace(stalls, mid, k)==true){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
}