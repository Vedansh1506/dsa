// brute
int smallestDivisor(vector<int>& arr, int limit)
{
	int n=arr.size();
	int maxi = *max_element(arr.begin(),arr.end());

	for(int d=1;d<=maxi;d++){
		int sum = 0;
		for(int i=0;i<n;i++){
			sum += ceil((double)arr[i]/(double)d);
		}
		if(sum<=limit) return d;
	}	
	return -1;
}

// optimal
class Solution {
public:
    int sumbyD(vector<int>& nums, int div){
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += ceil((double)nums[i]/(double)div);
        }   
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        if(n>threshold) return -1;
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid = low + (high-low)/2;
            if(sumbyD(nums,mid)<=threshold){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};