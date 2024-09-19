// 1. given row and column give the element present there

int nCr(int n, int r) {
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

int pascalTriangle(int r, int c) {
    int element = nCr(r - 1, c - 1);
    return element;
}
// 2. given row number n, print nth row
void pascalTriangle(int n) {
    long long ans = 1;
    cout << ans << " "; // printing 1st element

    //Printing the rest of the part:
    for (int i = 1; i < n; i++) {
        ans = ans * (n - i);
        ans = ans / i;
        cout << ans << " ";
    }
    cout << endl;
}
// 3. print whole pascal triangle

// brute
class Solution {
public:
    int nCr(int n,int r){
        long long res=1;
        for(int i=0;i<r;i++){
            res=res*(n-i);
            res=res/(i+1);
        }
        return (int)res;

    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int row=1;row<=numRows;row++){
            vector<int>temp;
            for(int col=1;col<=row;col++){
                temp.push_back(nCr(row-1,col-1));
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

// optimal 
class Solution {
public:
    vector<int> generateRow(int row){
        vector<int> ansRow;
        long long ans=1;
        ansRow.push_back(1);

        for(int col=1;col<row;col++){
            ans=ans*(row-col);
            ans=ans/col;
            ansRow.push_back(ans);
        }
        return ansRow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int row=1;row<=numRows;row++){  
            ans.push_back(generateRow(row));      
        }
    return ans;
    }
};