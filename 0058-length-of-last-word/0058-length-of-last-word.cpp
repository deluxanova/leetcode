class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int end = n-1,strt = n-1;
        
        while( end>=0 ){
            if( s[end]!=' ' )
                break;
            end--;
        }
        strt = end;
        while( strt>=0 ){
            if( s[strt]==' ' )
                break;
            strt--;
        }

        return (end-strt);
    }
};