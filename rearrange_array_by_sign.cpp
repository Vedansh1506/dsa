class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int posIndex=0;
        int negIndex=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                ans[negIndex]=nums[i];
                negIndex+=2;
            }
            else{
                ans[posIndex]=nums[i];
                posIndex+=2;
            }
        }
        return ans;
    }
};

// variant 2 
// not equal no. of posi and negi 
vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    vector<int> pos, neg;
    int n = a.size();
    for(int i=0;i<n;i++){
        if(a[i]>0){
            pos.push_back(a[i]);
        }
        else neg.push_back(a[i]);
    }

    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            a[2*i]=pos[i];
            a[2*i+1]=neg[i];
        }

        int index = neg.size()*2;
        for(int i=neg.size();i<pos.size();i++){
                a[index]=pos[i];
                index++;
        }
    }
    else{
        for(int i=0;i<pos.size();i++){
            a[2*i]=pos[i];
            a[2*i+1]=neg[i];
        }

        int index = pos.size()*2;
        for(int i=pos.size();i<neg.size();i++){
                a[index]=neg[i];
                index++;
        }
    }
    return a;
}