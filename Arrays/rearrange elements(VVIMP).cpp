//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int> k;
	    vector<int> j;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0){
	            k.push_back(arr[i]);
	        }
	        else{
	            j.push_back(arr[i]);
	        }
	    }
	    int r=0,t=0;
	    for(int i=0;i<n;i++){
	        if(i%2==0){
	            if(r>=k.size()){
	                arr[i]=j[t];
	                t++;
	            }else{
	                arr[i]=k[r];
	                r++;
	            }
	        }
	        else{
	            if(t>=j.size()){
	                arr[i]=k[r];
	                r++;
	            }
	            else{
	                arr[i]=j[t];
	                t++;
	            }
	        }
	        
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
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
