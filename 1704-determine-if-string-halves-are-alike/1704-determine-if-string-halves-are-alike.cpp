class Solution {
public:
    bool halvesAreAlike(string s) {
        char c;
        int n = s.size(),hlf = n/2,cnt = 0;
        
        for(int i = 0;i<hlf;i++){
            c = tolower( s[i] );
            if( c=='a' || c=='e' || c=='i'  || c=='o'  || c=='u')
                cnt++;
        }
        
        for(int i = hlf;i<n;i++){
            c = tolower( s[i] );
            if( c=='a' || c=='e' || c=='i'  || c=='o'  || c=='u')
                cnt--;
        }
        
        return (cnt==0)?true:false;
        
    }
};