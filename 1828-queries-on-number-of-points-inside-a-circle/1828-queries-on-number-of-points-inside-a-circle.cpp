class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i = 0;i<queries.size();i++){
            
            int x1 = queries[i][0], y1 = queries[i][1],r = queries[i][2],cnt = 0;
            for(int j = 0;j<points.size();j++){
                
                int x2 = points[j][0], y2 = points[j][1];
                float dist = sqrt( pow(x2-x1,2)+pow(y2-y1,2) );
                if( dist<=r )
                    cnt++;
            }
            ans.push_back(cnt++);
        }
        
        return ans;
        
    }
};