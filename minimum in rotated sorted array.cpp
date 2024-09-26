int findMin(vector<int>& arr)
{
	// Write your code here.
	int low=0;
	int high=arr.size()-1;
	int ans = INT_MAX;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[low]<=arr[mid]){
			ans=min(ans,arr[low]);
			low=mid+1;
		}
		else{
			ans=min(ans,arr[mid]);
			high=mid-1;
		}
	}
	return ans;
}

// further optimisation
class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int ans = INT_MAX;
        while(low<=high){
            int mid = low+(high-low)/2;
            // search space is already sorted then low element is the smallest
            if(nums[low]<=nums[high]){
                ans=min(ans,nums[low]);
                break;
            }
            if(nums[low]<=nums[mid]){
                ans=min(ans,nums[low]);
                low=mid+1;
            }
            else{
                ans=min(ans,nums[mid]);
                high=mid-1;
            }
        }
        return ans;
    }
};