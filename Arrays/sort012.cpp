//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int x=n-1;
        for(int i=0;i<n;i++){
            while(a[i] == 2 && x>=i){ swap(a[i],a[x]);x--; }
        }
        int y=x;
        for(int i=0;i<=y;i++){
            while(a[i]== 1 && x>=i){ swap(a[i],a[x]);x--;}
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends