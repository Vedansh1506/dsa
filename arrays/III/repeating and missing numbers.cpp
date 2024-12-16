// brute 
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    // Write your code here
    int n = a.size();
    int repeating = -1;
    int missing = -1;

    for(int i=1;i<=n;i++){
        int count = 0;
        for(int j=0;j<=n-1;j++){
            if(a[j]==i) count++;
        }
        if(count == 2) repeating=i;
        else if(count == 0) missing=i;

        if(repeating!=-1 && missing!=-1) break;
    }
    return {repeating,missing};
}

// better

vector<int> findMissingRepeatingNumbers(vector < int > a) {
    // Write your code here
    int n = a.size();
    int repeating = -1;
    int missing = -1; 
    int hash[n+1]={0};

    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
       
    for (int i = 1; i <= n; i++) {

        if (hash[i] == 2) repeating = i;
        else if (hash[i] == 0) missing = i;

        if (repeating != -1 && missing != -1)
          break;
    }
    return {repeating,missing};
}

// optimal 1 - maths

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        long long s1n = (long long)n*(n+1)/2;
        long long s2n = (long long)n*(n+1)*(2*n+1)/6;
        long long s1 = 0, s2 = 0;

        for(int i=0;i<n;i++){
            s1+=nums[i];
            s2+=(long long)nums[i]*(long long)nums[i];
        }
        long long val1 = s1-s1n;
        long long val2 = s2-s2n;

        long long val3 = val2/val1;

        long long x = (val1+val3)/2;
        long long y = val3-x;

        return {(int)x,(int)y};
    }
};

// optimal 2 - xor

vector<int> findMissingRepeatingNumbers(vector<int> a) {
    int n = a.size(); // size of the array

    int xr = 0;

    //Step 1: Find XOR of all elements:
    for (int i = 0; i < n; i++) {
        xr = xr ^ a[i];
        xr = xr ^ (i + 1);
    }

    //Step 2: Find the differentiating bit number:
    int number = (xr & ~(xr - 1));

    //Step 3: Group the numbers:
    int zero = 0;
    int one = 0;
    for (int i = 0; i < n; i++) {
        //part of 1 group:
        if ((a[i] & number) != 0) {
            one = one ^ a[i];
        }
        //part of 0 group:
        else {
            zero = zero ^ a[i];
        }
    }

    for (int i = 1; i <= n; i++) {
        //part of 1 group:
        if ((i & number) != 0) {
            one = one ^ i;
        }
        //part of 0 group:
        else {
            zero = zero ^ i;
        }
    }

    // Last step: Identify the numbers:
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == zero) cnt++;
    }

    if (cnt == 2) return {zero, one};
    return {one, zero};
}