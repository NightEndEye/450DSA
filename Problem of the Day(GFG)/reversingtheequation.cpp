//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            int i,j,k,l;
            l = s.size();
            stack<char> st;
            string s2="";
            for(i=0;i<l;i++)
            {
                if(i==l-1)
                   {st.push(s[i]);
                    continue;}
                if(s[i]>= '0' && s[i] <= '9')
                {
                    for(j=i+1;j<l;j++)
                    {
                        if(s[j]<'0' || s[j]>'9')
                           {k = j;
                           break;}
                           else
                           k = j+1;
                    }
                    for(j=k-1;j>=i;j--)
                        st.push(s[j]);
                    
                    i = k-1;
                }
                else
                    st.push(s[i]);
            }
            
            while(st.empty()!=1)
            {
                s2+= st.top();
                
                st.pop();
            }
            
            
           return s2;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
