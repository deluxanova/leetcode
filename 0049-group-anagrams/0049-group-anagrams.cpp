class Solution {
public:
    string keyGen(string s){
        vector<int> cnt(26,0);
        for(auto it:s)
            cnt[it-'a']++;
        
        string key = "";
        for(int i = 0;i<26;i++)
            key.append(to_string(cnt[i]+ 'a'));
        return key;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        
        for(auto curr:strs){
            string key = keyGen(curr);
            mp[key].push_back(curr);
        }
        
        for(auto i:mp)
            ans.push_back(i.second);
        
        return ans;
    }
};