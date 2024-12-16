// >n/3
// better 
vector<int> majorityElement(vector<int> v) {
	// Write your code here
	int n=v.size();
	vector<int> ls;
	map<int,int> mpp;
	int minimum = int(n/3)+1;
	for(int i=0;i<n;i++){
		mpp[v[i]]++;
		if(mpp[v[i]]==minimum){
			ls.push_back(v[i]);
		}
		if(ls.size()==2) break;
	}
	sort(ls.begin(),ls.end());
	return ls;
}

// optimal
// extended boyer moore's voting algo

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count1=0;
        int count2=0;
        int element1=INT_MIN;
        int element2=INT_MIN;
        
        for(int i=0;i<n;i++){
            if(count1==0 && element2!=nums[i]){
                count1=1;
                element1=nums[i];
            }
            else if(count2==0 && element1!=nums[i]){
                count2=1;
                element2=nums[i];
            }
            else if (element1==nums[i]){
                count1++;
            }
            else if (element2==nums[i]){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }

        vector<int> ls;
        count1=0;
        count2=0;

        for(int i=0;i<n;i++){
            if(nums[i]==element1) count1++;
            if(nums[i]==element2) count2++;
        }
        int mini = int(n/3) + 1;
        if(count1>=mini) ls.push_back(element1);
        if(count2>=mini) ls.push_back(element2);
        
        return ls;
    }
};