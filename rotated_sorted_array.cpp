class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        if(nums[0]<nums[nums.size()-1]) count++; //1st element greater than last element
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
            if(count>1) return false; //at most 1 point where an element can be greater than its next element
        }
        return true;
    }
};