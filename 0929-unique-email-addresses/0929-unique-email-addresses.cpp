class Solution {
public:
    int numUniqueEmails(vector<string>& arr){
        unordered_set<string> ans;
        
        for( auto curr:arr ){
            
            string str = curr;
            string s ="";
            
            int pos = str.find('@');
            string temp1 = str.substr(0,pos);
            string temp2 = str.substr(pos,str.length());
            
            int idx = 0;
            while( idx<temp1.size() ){
                
                if(temp1[idx]=='+')
                    break;	
            
                else if(temp1[idx]=='.')
                    idx++;
                
                else{
                    s.push_back(temp1[idx]);
                    idx++;
                }
            }   
            ans.insert( s+temp2 );
        }
        return ans.size();
    }
};