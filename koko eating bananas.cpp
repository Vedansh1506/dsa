// brute
#include <bits/stdc++.h>
int findMax(vector<int> v){
    int maxi=INT_MIN;
    int n = v.size();
    for(int i=0;i<n;i++){
        maxi=max(maxi,v[i]);
    }
    return maxi;
}

int calcTotalHours(vector<int> v, int hourly){
    int n = v.size();
    int totalhours = 0;
    for(int i=0;i<n;i++){
        totalhours += ceil((double)v[i]/(double)hourly);
    }
    return totalhours;
}
int minimumRateToEatBananas(vector<int> v, int h) {
    int m = findMax(v);

    for(int i=1;i<=m;i++){
        int reqTime = calcTotalHours(v,i);
        if(reqTime<=h) return i;
    }
    return m;
}

// optimal
#include <bits/stdc++.h>

int findMax(vector<int> v){
    int n = v.size();
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        maxi = max(maxi,v[i]);
    }
    return maxi;
}

long long calcHours(vector<int> v, int hourly){
    int n = v.size();
    long long totalhours = 0;
    for(int i=0;i<n;i++){
        totalhours += ceil((double)(v[i])/(double)(hourly));
    }
    return totalhours;
}
int minimumRateToEatBananas(vector<int> v, int h) {
    int low = 1;
    int high = findMax(v);
    while(low<=high){
        int mid = (low+high)/2;
        long long totalhours = calcHours(v,mid);
        if(totalhours<=h) high=mid-1;
        else low=mid+1;
    }
    return low;
}