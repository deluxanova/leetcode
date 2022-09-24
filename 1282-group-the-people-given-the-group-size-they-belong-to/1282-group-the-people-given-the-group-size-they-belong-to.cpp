class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>>ans;
        unordered_map<int, vector<int>>mymap;
        
        for(int i=0;i<n;i++){
            mymap[arr[i]].push_back(i);
            if(mymap[arr[i]].size()==arr[i]){
                ans.push_back( mymap[arr[i]] );
                mymap[arr[i]].clear();
            }
        }
        return ans;
    }
};