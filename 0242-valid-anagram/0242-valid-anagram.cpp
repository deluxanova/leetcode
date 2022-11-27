class Solution {
public:
    bool isAnagram(string s1, string s2) {
        
        if( s1.size()!=s2.size() )
            return false;
        
        vector<int> occur(27,0);
        
        for(int i = 0;i<s1.size();i++){
            occur[ s1[i]-'a' ]++;
            occur[ s2[i]-'a' ]--;
        }  
        
        for(int i = 0;i<27;i++){
            if( occur[i]!=0 )
                return false;
        }
        return true;
    }
};