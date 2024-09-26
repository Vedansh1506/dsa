// brute
int floorSqrt(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++){
        if(i*i<=n){
            ans=i;
        }
        else{
            break;
        }
    }
    return ans;
}

// optimal 1

sqrt(n)

// optimal 2

int floorSqrt(int n)
{
    int low=1;
    int high=n;
    // int ans=1;
    while(low<=high){
        int mid=(low+high)/2;
        if((long long)mid*mid<=n){
            // ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high; // OR return ans;
}
