class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n = word1.size(),m = word2.size();
        
        if( n!=m )
            return false;
        
        string s1 = "",s2 = "";
        vector<int> cnt1(27,0), cnt2(27,0);
        
        for( auto it:word1 )    cnt1[it-'a']++;
        for( auto it:word2 )    cnt2[it-'a']++;
        
        for(int i = 0;i<27;i++){
            if( cnt1[i]!=0 && cnt2[i]!=0 ){
                s1 +=  to_string(cnt1[i]);
                s2 +=  to_string(cnt2[i]);
            }
            else if( (cnt1[i]!=0 && cnt2[i]==0)  || (cnt1[i]==0 && cnt2[i]!=0) )
                return false;
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        return (s1==s2); 
    }
};