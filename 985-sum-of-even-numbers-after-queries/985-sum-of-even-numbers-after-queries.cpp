class Solution {
public:
    
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        
        int sum = 0;
        vector<int> ans;
        for(auto it:nums){
            if(it%2==0)
                sum+=it;
        }
        
        //cout<<sum<<endl;
        for(auto q:queries){
            int val = q[0],idx = q[1];
            
            if( nums[idx]%2!=0 && val%2!=0 ){ //both odd
                cout<<"c1"<<endl;
                sum+=(nums[idx]+val);
                nums[idx]+=val;
            }
            else if( nums[idx]%2==0 && val%2!=0 ){    //num even and val odd
                cout<<"c2"<<endl;
                sum-=nums[idx];
                nums[idx]+=val;
            }
            else if( nums[idx]%2!=0 && val%2==0 ){    //num odd and val even
                cout<<"c3"<<endl;
                nums[idx]+=val;    
            }
            else{   //both even
                cout<<"c4"<<endl;
                sum+=val;
                nums[idx]+=val;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};