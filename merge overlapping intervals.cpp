#include<vector>

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	vector<vector<int>> ans;
	sort(arr.begin(),arr.end());
	for(int i=0;i<arr.size();i++){
		int start = arr[i][0];
		int end = arr[i][1];

		if(!ans.empty() && end<=ans.back()[1]) continue;

		for(int j=i+1;j<arr.size();j++){
			if(arr[j][0]<=end){
				end = max(end, arr[j][1]);
			}
			else break;
		}
		ans.push_back({start,end});
	}
	return ans;
}

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        
        for(int i=0;i<n;i++){
            if(ans.empty() || intervals[i][0] > ans.back()[1]){
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }
        return ans;
    }
};