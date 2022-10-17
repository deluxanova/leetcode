class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> cnt(26,0);
        
        for(auto it:sentence)
            cnt[it-'a']++;
        
        for(auto it:cnt){
            if(it==0)
                return 0;
        }
        
        return 1;
    }
};