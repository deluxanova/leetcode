class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& arr) {
        int n = arr.size(),pos = 0;
        vector<vector<int>> ans;
        
        vector<pair<int,int>> vp;
        for(int i = 0;i<n;i++)
            vp.push_back({arr[i],i});
        sort(vp.begin(),vp.end());
        
        while(pos<n){
            int size = vp[pos].first;
            vector<int> tmp;
            while( pos<n && vp[pos].first==size && tmp.size()<size ){
                tmp.push_back(vp[pos].second);
                pos++;
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};