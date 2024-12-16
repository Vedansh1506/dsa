// brute
int calcStudents(vector<int>& arr, int pages){
    int n = arr.size();
    int students = 1;
    int pagesStudents = 0;
    for(int i=0;i<n;i++){
        if(pagesStudents + arr[i]<=pages){
            pagesStudents += arr[i];
        }
        else{
            students++;
            pagesStudents = arr[i];
        }
    }
    return students;
}
int findPages(vector<int>& arr, int n, int m) {
    if(m>n) return -1;

    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);

    for(int i=low;i<=high;i++){
        if(calcStudents(arr,i)==m){
            return i;
        }
    }
    return low;
}

// optimal
int calcStud(vector<int>& arr, int pages){
    int n = arr.size();
    int students = 1;
    int pagesStud = 0;
    for(int i=0;i<n;i++){
        if(pagesStud + arr[i] <= pages){
            pagesStud += arr[i];
        }
        else{
            students++;
            pagesStud = arr[i];
        }
    }
    return students;
}
int findPages(vector<int>& arr, int n, int m) {
    if(m>n) return -1;

    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);

    while(low<=high){
        int mid = (low+high)/2;
        if(calcStud(arr, mid)<=m){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return low;
}


// leetcode que - split array largest sum

// book allocation , split array largest sum, painter's partition - all are same