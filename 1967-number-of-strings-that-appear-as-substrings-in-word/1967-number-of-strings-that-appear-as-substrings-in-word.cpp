class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt = 0;
        for(int i = 0;i<patterns.size();++i){
            string curr = patterns[i];
            int len = curr.size();
            
            if( len>word.size() ) continue;
            for(int j = 0;j<=word.size()-len;++j){
                if( word.substr(j,len)==curr ){
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
        
        
    }
};

// TC -O(n*m) can be solved using KMP too.