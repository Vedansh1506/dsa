// can be done using lower bound and upper bound

int lowerbound(vector<int>& arr, int n, int k){
    int low = 0;
    int high = n-1;
    int ans=n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=k){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int upperbound(vector<int>& arr, int n, int k){
    int low = 0;
    int high = n-1;
    int ans=n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>k){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int lb = lowerbound(arr,n,k);
    if(lb==n || arr[lb]!=k) return{-1,-1};
    return {lb, upperbound(arr, n, k) - 1};
}


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = -1, last = -1;
        int low = 0, high = n-1;
        vector<int> ans;
        // first
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid]==target){
                first = mid;
                high = mid-1;
            }
            else if(nums[mid]<target) low = mid+1;
            else high = mid-1;
        }
        // last
        low=0;
        high=n-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target){
                last=mid;
                low=mid+1;
            }
            else if(nums[mid]<target) low=mid+1;
            else high = mid-1;
        }
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};