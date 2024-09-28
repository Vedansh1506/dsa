int partition(vector<int> &boards, int time){
    int n = boards.size();
    int painters = 1;
    long long boardsPainter = 0;
    for(int i=0;i<n;i++){
        if(boardsPainter+boards[i]<=time){
            boardsPainter+=boards[i];
        }
        else{
            painters++;
            boardsPainter = boards[i];
        }
    }
    return painters;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    int n = boards.size();
    int low = *max_element(boards.begin(),boards.end());
    int high = accumulate(boards.begin(),boards.end(),0);

    while(low<=high){
        int mid = (low+high)/2;
        if(partition(boards,mid)<=k){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return low;
}
// book allocation , split array largest sum, painter's partition - all are same