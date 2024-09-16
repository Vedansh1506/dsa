int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    int n = a.size();
    if(n==0) return 0;

    unordered_set<int>st;
    int longest = 1;
    
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }

    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int count = 1;
            int x = it;
            while(st.find(x+1)!=st.end()){
                x=x+1;
                count++;
            }
            longest = max(longest,count);
        }
    }
    return longest;
}