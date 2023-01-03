class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int tgt) {
        int strt = 0,n = arr.size(),end = n-1,sum = 0; 
        for(int i = 0;i<arr.size();i++){
            sum = arr[strt]+arr[end];
            if( sum==tgt )
                break;
            else if( sum>tgt )
                end--;
            else
                strt++;
        }
        
        return {strt+1,end+1};
    }
};