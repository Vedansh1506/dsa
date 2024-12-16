// brute
double minimiseMaxDistance(vector<int> &arr, int k){
	int n = arr.size();
	vector<int> howMany(n-1,0);

	for(int gasStations=1;gasStations<=k;gasStations++){
		double maxVal = -1;
		int maxInd = -1;
		for(int i=0;i<n-1;i++){
			double diff = arr[i+1]-arr[i];
			double sectionLen = diff/(double)(howMany[i]+1);
			if(maxVal < sectionLen){
				maxVal = sectionLen;
				maxInd = i;
			}
		}
		howMany[maxInd]++;
	}

	double maxAns = -1;
	for(int i=0;i<n-1;i++){
		double diff = arr[i+1]-arr[i];
		double sectionLen = diff/(double)(howMany[i]+1);
		maxAns = max(maxAns,sectionLen);
	}
	return maxAns;
}

// better


// optimal