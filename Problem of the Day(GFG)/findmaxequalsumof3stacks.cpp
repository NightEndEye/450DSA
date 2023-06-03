//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
     int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        int s1 = 0, s2 = 0, s3 = 0;
        int i=0, j=0, k=0;
        
        for(int x: S1) s1 += x;
        
        for(int x: S2) s2 += x;
        
        for(int x: S3) s3 += x;
        
        int mini = min(s1, min(s2, s3));
        
        while(i < N1 && j < N2 && k < N3) {
            if(s1 > mini) {
                s1 = s1-S1[i++];
                mini = min(mini, s1);
            }
            
            if(s2 > mini) {
                s2 = s2-S2[j++];
                mini = min(mini, s2);
            }
            
            if(s3 > mini) {
                s3 = s3-S3[k++];
                mini = min(mini, s3);
            }
            
            if(s1 == s2 && s1 == s3) return mini;
        }
        
        return 0;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}
// } Driver Code Ends
