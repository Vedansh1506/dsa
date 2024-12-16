//repetition allowed 

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> ans;
        vector<int> visited (n2,0);

        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(nums1[i]==nums2[j] && visited[j]==0){
                    ans.push_back(nums1[i]);
                    visited[j]=1;
                    break;
                }
                // if(nums2[j]>nums1[i]) break;
            }
        }
        return ans;
    }
};

// both are sorted arrays

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> ans;
        vector<int> visited (n2,0);

        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(nums1[i]==nums2[j] && visited[j]==0){
                    ans.push_back(nums1[i]);
                    visited[j]=1;
                    break;
                }
                // if(nums2[j]>nums1[i]) break;
            }
        }
        return ans;
    }
};

//not sorted

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int i = 0;
        int j = 0;
        int n1 = nums1.size();
        int n2 = nums2.size();
        unordered_set<int> result;
        vector<int> ans;

        while(i<n1 && j<n2){
            if(nums1[i]==nums2[j]){
                result.insert(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else i++;
        }
        ans.assign(result.begin(),result.end());
        return ans;
    }
};