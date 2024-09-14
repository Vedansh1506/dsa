class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int array_sum=0;
        int summ=0;
        set<int> st;
        for(int i=0;i<n;i++){
            array_sum+=nums[i];
            st.insert(nums[i]);
        }
        for(auto it : st){
            summ+=it;
        }
        summ=summ*2;
        return summ-array_sum;
    }
};

// approach 2
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) { 
//        int ans=0;
// 	   for(auto x:nums)
// 	   ans^=x;
// 	   return ans;
//     }
// };