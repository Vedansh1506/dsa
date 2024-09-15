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