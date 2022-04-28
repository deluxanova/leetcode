class Solution {
public:
    string reformatNumber(string number) {
        
        string s = "",ans = "";
        for(auto it:number)
            if( isdigit(it) )    s += it;
        
        int pos = 0,len = s.size();
        
        while( pos<len ){
            if( (len-pos)>4 ){
                ans += s.substr(pos,3)+'-';
                pos += 3;
            }
            if( (len-pos)==4 ){
               ans += s.substr(pos,2)+'-';
               pos += 2;
            }
            if( (len-pos)==3 ){
                ans += s.substr(pos,3);
                pos += 3;
            }
            if( (len-pos)==2 ){
                ans += s.substr(pos,2);
                pos += 2;
            }
            
        }
        return ans;    
    }
};