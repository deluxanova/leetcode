class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int i,j,n = points.size(),ans = 1;
        
        for(i = 0;i<n-1;i++){
            map<double,int> mp;
            for(j = i+1;j<n;j++){
                double slp = (double)(points[j][1]-points[i][1])/(double)(points[j][0]-points[i][0]);
                if(points[j][1]-points[i][1]<0 &&(points[j][0]-points[i][0])==0 ) //infinite slope for Perpendicular line
                    mp[abs(slp)]++;
                else
                    mp[slp]++;
            }
            // same slope w.r.t.that selected point
            int temp = 0;
            for(auto it:mp)
                temp = max(temp, it.second+1);    // +1 for the current point(point itself)
            ans = max(temp, ans);
        }
        return ans;
    }
};