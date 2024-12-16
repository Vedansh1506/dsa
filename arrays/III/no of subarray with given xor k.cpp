int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int xorr=0;
            for(int k=i;k<=j;k++){
                xorr=xorr ^ A[k];
            }
            if(xorr==B) count++;
        }
    }
    return count;
}

int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int count=0;
    for(int i=0;i<n;i++){
        int xorr=0;
        for(int j=i;j<n;j++){
            xorr=xorr ^ A[j];
            if(xorr==B) count++;
        }
    }
    return count;
}

#include<bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int b) {
    int n = a.size();
    int xr=0;
    map<int,int> mpp;
    mpp[xr]++;
    int count=0;

    for(int i=0;i<n;i++){
        xr = xr ^ a[i];

        int x = xr ^ b;

        count += mpp[x];

        mpp[xr]++;
    }
    return count;
}