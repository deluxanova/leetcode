class Solution {
public:
    int minOperations(string s) {
        
        int starts0 = 0, starts1 = 0;
        for(int i = 0; i<s.size();i++){
            if(s[i]-'0'!=i%2) 
                starts0++;
            else              
                starts1++;    
        } 
        return min(starts0, starts1);
    }
};