//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long ans=arr[0];
	    long long mini=arr[0];
	    long long maxi=arr[0];
	    for(int i=1;i<n;i++){
	        if(arr[i-1]==0){
	            maxi=arr[i];
	            mini=arr[i];
	            ans=max<long long>(ans,maxi);
	            continue;
	        }
	        long long int t1=mini*arr[i];
	        long long int t2=maxi*arr[i];
	        mini=min<long long>(t1,t2);
	        maxi= max<long long>(t1,t2);
	        maxi=max<long long>(maxi,arr[i]);
	        mini=min<long long>(mini,arr[i]);
	        ans=max<long long>(ans,maxi);
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
