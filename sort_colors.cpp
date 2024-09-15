class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;                    // dutch national flag algorithm
        int high = nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
            else mid++;
        }
    }
};
// for(int i=nums.size()-1;i>=0;i--){
        //     int swapped=0;
        //     for(int j=0;j<=i-1;j++){
        //         if(nums[j]>nums[j+1]){
        //             int temp = nums[j];
        //             nums[j]=nums[j+1];
        //             nums[j+1]=temp;
        //             swapped=1;
        //         }

        //     }
        //     if(swapped==0){
        //         break;
        //     }
        // }