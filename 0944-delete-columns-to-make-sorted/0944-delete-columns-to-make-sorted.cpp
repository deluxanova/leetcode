class Solution {
public:
    int checkOrder(string s){
        string t = s;
        sort(t.begin(),t.end());
        return s==t;
    }
    int minDeletionSize(vector<string>& strs) {
        
        int n = strs.size(),m = strs[0].size();
        int count = 0;
        string tmp = "";
        
        for(int i = 0;i<m;i++){
            tmp = "";
            
            for(int j = 0;j<n;j++)
               tmp += strs[j][i];

            if( !checkOrder(tmp) )
                count++;
        }
        return count;
    }
};