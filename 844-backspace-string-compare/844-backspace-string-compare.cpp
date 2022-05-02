class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        string res1 = "";
        for(int i = 0;i<s.size();++i){
            if( s[i]=='#' && res1!="" ) res1.pop_back();   
            else if( s[i]!='#' ) res1 += s[i];
        }
        
        string res2 = "";
        for(int i = 0;i<t.size();++i){
            if( t[i]=='#' && res2!="" ) res2.pop_back();   
            else if( t[i]!='#' ) res2 += t[i];
        }
        cout<<res1<<" "<<res2<<endl;
        return res1==res2;
    }
};