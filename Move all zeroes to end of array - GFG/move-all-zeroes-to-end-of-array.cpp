//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int cnt = 0;
	    vector<int> v;
	    
	    for(int i = 0;i<n;i++){
	        if( arr[i]!=0 )
	            v.push_back( arr[i] );
	        else
	            cnt++;
	    }
	    
	    for(int i = 0;i<n-cnt;i++){
	        arr[i] = v[i];
	    }
	    for(int i = n-cnt;i<n;i++){
	        arr[i] = 0;
	    }
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends