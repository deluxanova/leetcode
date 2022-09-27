class Solution {
public:
    int leftmost(vector<int> arr,int val,int low,int high){
        if( low>high )
            return -1;
        
        int mid = (low+high)/2;
        
        if( arr[mid]==val && (mid==0||arr[mid-1]!=val) )
            return mid;
        else if( arr[mid]>=val )
            return leftmost(arr,val,low,mid-1);
        else
            return leftmost(arr,val,mid+1,high);
    }
    
    int rightmost(vector<int> arr,int val,int low,int high,int n){
        if( low>high )
            return -1;
        
        int mid = (low+high)/2;
        
        if( arr[mid]==val && (mid==(n-1)||arr[mid+1]!=val) )
            return mid;
        else if( arr[mid]>val )
            return rightmost(arr,val,low,mid-1,n);
        else
            return rightmost(arr,val,mid+1,high,n);
    }
    
    vector<int> targetIndices(vector<int>& nums, int target) {
        
        int strt = 0,end = 0,n = nums.size();
        vector<int> ans;
        
        sort( nums.begin(),nums.end() );
        strt = leftmost(nums,target,0,n-1);
        end = rightmost(nums,target,0,n-1,n);
        
        if( strt==-1 && end==-1 )
            return {};
        
        for(int i = strt;i<=end;i++)
            ans.push_back(i);
        
        return ans;
    }
};