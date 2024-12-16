// kadane's algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maximum=INT_MIN;

        // int start = 0;
        // int ansStart=-1;
        // int ansEnd=-1;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];

            // if(sum==0) start = i;

            if(sum>maximum){
              maximum = sum;
              
              // ansStart = start;
              // ansEnd = i;
            } 
            if(sum<0) sum=0;

            // if(maximum<0) maximum=0;   // if given in question for empty subarray 
        }
        return maximum;
    }
};