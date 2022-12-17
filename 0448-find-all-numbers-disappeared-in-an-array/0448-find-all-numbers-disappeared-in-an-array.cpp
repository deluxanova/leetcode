class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& arr) {
        int n = arr.size();
        if(n==1 && arr[0]!=1)
                return {1};
        vector<int> ans;
        vector<int> res(n+1,0);
        
        for(auto it:arr)
            res[it]++ ;
            
        for(int i = 1;i<n+1;i++){
            if( res[i]==0 )
                ans.push_back(i);
        }
        return ans;
    }
};