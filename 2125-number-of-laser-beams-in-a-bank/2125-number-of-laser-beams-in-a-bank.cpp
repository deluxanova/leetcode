class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev=0, curr=0, ans=0;
        for(auto &a:bank){
            curr=count(a.begin(),a.end(),'1');
            if(curr!=0){
                ans+=prev*curr;
                prev=curr;
            }
        }
       return ans;
    }
};