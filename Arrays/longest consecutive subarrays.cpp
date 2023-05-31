//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        // if(N==1) return 1;
        // sort(arr,arr+N);
        // vector<int> maxi;
        // int count=1;
        // for(int i=1;i<N;i++){
        //      while(arr[i] == arr[i-1])
        //     {
        //         i++;
        //     }
        //     if(arr[i]==arr[i-1]+1){
        //           count++;
        //       } else{
        //           maxi.push_back(count);
        //           count=1;
        //       }
        //   }
        //   int ans= *max_element(maxi.begin(),maxi.end());
        //   return ans;
        int count = 1,ans = 1;
        sort(arr+0,arr+N);
        for(int i=0;i<N-1;i++)
        {
            while(arr[i+1] == arr[i])
            {
                i++;
            }
            if(arr[i+1] == (arr[i] + 1))
            {
                count++;
                ans = max(ans,count);
            }
            else
            {
                count = 1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends
