class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> ans;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             ans.push_back(i);
        //             ans.push_back(j);
        //         }
        //     }
        // }
        // return ans;

        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            int more = target - num;
            if(mpp.find(more)!=mpp.end()){
                return {mpp[more],i};
            }
            mpp[num]=i;
        }
        return {-1,-1};
    }
};

// pair<int, int> twoSum(int n, vector<pair<int, int>> &arr, int target) {
//     sort(arr.begin(), arr.end()); // Sort based on values, but preserve original indices
//     int left = 0, right = n - 1;

//     while (left < right) {
//         int sum = arr[left].first + arr[right].first;
//         if (sum == target) {
//             return {arr[left].second, arr[right].second}; // Return the original indices
//         }
//         else if (sum < target) left++;
//         else right--;
//     }

//     return {-1, -1}; // No pair found
// }