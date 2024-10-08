// i<j --> a[i] > 2 * a[j]

// brute
// write skill as arr for better understanding

int team(vector <int> & skill, int n){
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(skill[i]>2*skill[j]) count++;
        }
    }
    return count;
}


// optimal

void merge (vector<int> &arr, int low, int mid, int high){
    int left = low;
    int right = mid+1;
    vector<int> temp;

    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;   
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}

int countpairs(vector<int> &arr, int low, int mid, int high){
    int right = mid+1;
    int count = 0;
    for(int i=low;i<=mid;i++){
        while(right<=high && arr[i] > 2*arr[right]) right++;
        count += (right-(mid+1));
    }
    return count;
}

int mergesort(vector<int> &arr, int low, int high){
    int count = 0;
    if(low>=high) return count;
    int mid = (low+high)/2;
    count+=mergesort(arr,low,mid);
    count+=mergesort(arr,mid+1,high);
    count+=countpairs(arr,low,mid,high);
    merge(arr,low,mid,high);
    return count;
}

int team(vector<int> &skill, int n){
    return mergesort(skill, 0, n-1);
}

