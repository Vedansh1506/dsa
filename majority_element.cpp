
// better approach

// #include<bits/stdc++.h>

// int majorityElement(vector<int> v) {
// 	// Write your code here
// 	map <int,int> mpp;
// 	int n = v.size();
// 	for(int i=0;i<n;i++){
// 		mpp[v[i]]++;
// 	}
// 	for(auto it:mpp){
// 		if(it.second > (n/2)){
// 			return it.first;
// 		}
// 	}
// 	return -1;
// }

// optimal 

// moore's voting algo

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int element;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(count==0){
                count=1;
                element = nums[i];
            }
            else if(element = nums[i]){
                count++;
            }
            else count--;
        }

        int count1=0;
        for(int i=0;i<n;i++){
            if(nums[i]==element) count1++;
        }
        if(count1 > (n/2)) return element;
        return -1;
    }
};
