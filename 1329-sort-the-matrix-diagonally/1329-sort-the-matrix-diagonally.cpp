class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        vector<int> tmp;
        int m = mat[0].size() , n = mat.size();
        for (int r=0; r<n; r++){
            tmp.clear();
            for (int j=0,i=r; j<m && i<n ; j++,i++) tmp.push_back(mat[i][j]);    
            sort(tmp.begin(),tmp.end());
            for (int j=0,i=r; j<m && i<n ; j++,i++) mat[i][j]=tmp[j];          
        }
        for (int c=1; c<m; c++){
            tmp.clear();
            for (int i=0, j=c; j<m && i<n; i++, j++) tmp.push_back(mat[i][j]);   
            sort(tmp.begin(),tmp.end());
            for (int i=0, j=c; j<m && i<n; i++, j++) mat[i][j] = tmp[i];         
        }
        return mat;
    }
    
};