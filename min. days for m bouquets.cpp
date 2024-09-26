// brute
bool possible(vector<int> arr,int day, int m, int k){
	int n = arr.size();
	int count = 0;
	int noB=0;
	for(int i=0;i<n;i++){
		if(arr[i]<=day){
			count++;
		}
		else{
			noB+=(count/k);
			count = 0;
		}
	}
	noB+=(count/k);
	return noB>=m;
}
int roseGarden(vector<int> arr, int k, int m)
{
	int n = arr.size();
	if(n<(m*k)) return -1;

	int mini = INT_MAX;
	int maxi = INT_MIN;
	for(int i=0;i<n;i++){
		mini = min(mini,arr[i]);
		maxi = max(maxi,arr[i]);
	}

	for(int i=mini;i<=maxi;i++){
		if(possible(arr,i,m,k)){
			return i;
		}
	}
	return -1;
}

// optimal
bool possible(vector<int> arr, int day, int k, int m){
	int count = 0;
	int noB = 0;
	int n = arr.size();
	for(int i=0;i<n;i++){
		if(arr[i]<=day){
			count++;
		}
		else{
			noB+=(count/k);
			count=0;
		}
	}
	noB+=(count/k);
	return noB>=m;
}
int roseGarden(vector<int> arr, int k, int m)
{
	int n=arr.size();
	int mini=INT_MAX;
	int maxi=INT_MIN;
	for(int i=0;i<n;i++){
		mini=min(mini,arr[i]);
		maxi=max(maxi,arr[i]);
	}
	if(n<(m*k)) return -1;
	int low = mini;
	int high = maxi;
	while(low<=high){
		int mid = (low+high)/2;
		if(possible(arr,mid,k,m)){
			high = mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return low;
}