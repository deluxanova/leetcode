class NumMatrix {
    vector<vector<int>> pf;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        
        int r = matrix.size(),c = matrix[0].size();
        pf.assign( r+1 ,vector<int>(c+1) );
        
        for(int i = 0;i<r;i++ ){
            for(int j = 0;j<c;j++){
                pf[i+1][j+1] = (matrix[i][j] + pf[i+1][j] + pf[i][j+1]) - pf[i][j];
            }
        }
    }
    
    int sumRegion(int r1, int c1, int r2, int c2) {
        return pf[r2+1][c2+1] - pf[r2+1][c1] - pf[r1][c2+1] + pf[r1][c1] ;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */