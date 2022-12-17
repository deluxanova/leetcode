class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,int> m1;
        int val = 1;
        for( auto it:pattern ){
            if( m1.find(it)!=m1.end() )
                continue;
            else
                m1[it] = val++;
        }
        
        string t1 = "";
        for( auto it:pattern )
            t1 += to_string(m1[it]);
        
        string tmp = "";
        vector<string> vtr;
        for(int i = 0;i<s.size();i++){
            if( s[i]!=' ' )
                tmp += s[i];
            else{
                vtr.push_back(tmp);
                tmp = "";
            }
        }
        vtr.push_back(tmp);
        
        unordered_map<string,int> m2;
        val = 1;
        for(auto it:vtr){
            if( m2.find(it)!=m2.end() )
                continue;
            else
                m2[it] = val++;
        }
        
        string t2 = "";
        for( auto it:vtr )
            t2 += to_string(m2[it]);
        
       return t1==t2;
    }
};