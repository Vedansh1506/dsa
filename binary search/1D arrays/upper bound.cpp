int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	int low=0;
	int high=n-1;
	int ans=n;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid]>x){
			ans=mid;
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return ans;	
}

upper_bound(arr.begin(),arr.end(),x)-arr.begin();
// part of array only - (arr+2, arr+7, x)
