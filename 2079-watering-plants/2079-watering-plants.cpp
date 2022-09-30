class Solution {
public:
    int wateringPlants(vector<int>& arr, int capacity) {
        int cap = capacity,n = arr.size(),steps = 0;
        
        for(int i = 0;i<n;i++){
           if(cap-arr[i]>=0){
               cap-=arr[i];
               steps++;
           }
           else{
               cap = capacity-arr[i];
               steps+=(2*i+1);
           }
        }
        
        return steps;
    }
};