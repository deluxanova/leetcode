class Solution {
public:
    bool checkZeroOnes(string s) {
        
        int len1 = 0,len0 = 0,ans0 = 0,ans1 = 0;
        
        for(int i = 0;i<s.size();++i){
            if( s[i]=='1' ){
                len1++;
                ans1 = max(len1,ans1);
                len0 = 0;
            }
            else{
                len0++;
                ans0 = max(len0,ans0);
                len1 = 0;
            }
        }
        return ans1>ans0;
    }
};
