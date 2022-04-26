class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;
        string wrd = "";
        for( auto curr:words ){
            wrd = curr.substr(0,pref.size());
            if( pref.size()<=curr.size() && pref==wrd) ans++;
        }
        return ans;
    }
};