// brute
#include <bits/stdc++.h> 

void markrows(vector<vector<int>> &matrix, int n, int m, int i){
	for(int j=0;j<m;j++){
		if(matrix[i][j]!=0){
			matrix[i][j]=-1;
		}
	}
}

void markcols(vector<vector<int>> &matrix, int n, int m, int j){
	for(int i=0;i<n;i++){
		if(matrix[i][j]!=0){
			matrix[i][j]=-1;
		}
	}
}
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				markrows(matrix,n,m,i);
				markcols(matrix,n,m,j);
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==-1){
				matrix[i][j]=0;
			}
		}
	}
	return matrix;
}


// better
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	
	int rows[n]={0};
	int cols[m]={0};

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				rows[i]=1;
				cols[j]=1;
			}
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(rows[i] || cols[j]){
				matrix[i][j]=0;
			}
		}
	}
	return matrix;
}

// optimal

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();          // no. of rows
        int m = matrix[0].size();       // no. of cols
        int col0=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    if(j!=0){
                        matrix[0][j]=0;
                    }
                    else{
                        col0=0;
                    }
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]!=0){
                    if(matrix[i][0]==0 || matrix[0][j]==0){
                        matrix[i][j]=0;
                    }
                }
            }
        }
        if(matrix[0][0]==0){
            for(int j=0;j<m;j++){
                matrix[0][j]=0;
            }
        }
        if(col0==0){
            for(int i=0;i<n;i++){
                matrix[i][0]=0;
            }
        }
    }
};