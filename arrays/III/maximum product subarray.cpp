// brute

#include<vector>
#include<bits/stdc++.h>

int subarrayWithMaxProduct(vector<int> &arr){
	int n = arr.size();
	int result = INT_MIN;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int prod = 1;
			for(int k=i;k<=j;k++){
				prod*=arr[k];
			}
			result=max(result,prod);
		}
	}
	return result;
}

// better

#include<vector>
#include<bits/stdc++.h>

int subarrayWithMaxProduct(vector<int> &arr){
	int n = arr.size();
	int result = arr[0];
	for(int i=0;i<n;i++){
		int prod = arr[i];
		for(int j=i+1;j<n;j++){
			result=max(result,prod);
			prod*=arr[j];
		}
		result=max(result,prod);
	}
	return result;
}

// optimal 1

#include<vector>
#include<bits/stdc++.h>

int subarrayWithMaxProduct(vector<int> &arr){
	int n = arr.size();

	int ans = INT_MIN;
	int pre = 1;
	int suf = 1;
	for(int i=0;i<n;i++){
		if(pre==0) pre=1;
		if(suf==0) suf=1;
		pre*=arr[i];
		suf*=arr[n-i-1];
		ans=max(ans,max(pre,suf));
	}
	return ans;
}

// optimal 2 
// kadane's algo
// not intuitive 
// not to use

int maxProductSubArray(vector<int>& nums) {
    int prod1 = nums[0],prod2 = nums[0],result = nums[0];
    
    for(int i=1;i<nums.size();i++) {
        int temp = max({nums[i],prod1*nums[i],prod2*nums[i]});
        prod2 = min({nums[i],prod1*nums[i],prod2*nums[i]});
        prod1 = temp;
        
        result = max(result,prod1);
    }
    
    return result;
}