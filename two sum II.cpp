class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int left = 0;
        int right = n-1;
        while(left<=right){
            int total = numbers[left]+numbers[right];
            if(total==target){
                return {left+1,right+1};
            }
            else if(total>target) right--;
            else left++;
        }
        return {-1,-1};
    }
};