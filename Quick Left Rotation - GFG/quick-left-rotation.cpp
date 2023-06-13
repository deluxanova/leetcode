//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	void leftRotate(int arr[], int k, int n) {
	    k = k%n;
	    vector<int> arr_k(k,0);
	    
	    for(int i = 0;i<k;i++){
	        arr_k[i] = arr[i];
	    }
	    
	    int strt = k,end = n-1;
	    int fst = 0;
	    for(int i = 0;i<n && strt<=end;i++,strt++){
	        arr[i] = arr[strt];
	    }
	    
	    strt = n-k;
	    for(int i = 0;i<k && strt<n;i++){
	        arr[strt++] = arr_k[i];
	    }
	    
	} 
		 

};

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends