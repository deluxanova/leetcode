class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> pascal( n, vector<int>(n,0) ),ans;
        
        for(int i = 0;i<n;i++){
            pascal[0][i] = 1;
            pascal[i][0] = 1;
        }
        
        int cc = n-1;
        for(int r = 1;r<n-1;r++){
            for(int c = 1;c<cc;c++)
                pascal[r][c] = pascal[r][c-1]+pascal[r-1][c];
            cc--;
        }
        
        for(int r = 0;r<n;r++){
            int row = r;
            vector<int> tmp;
            for(int c = 0;c<=r;c++)
                tmp.push_back(pascal[row--][c]);
            ans.push_back(tmp);
        }
        
        return ans;
    }
};