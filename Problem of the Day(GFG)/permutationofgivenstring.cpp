//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void rec(int n,vector<int>& count,string& temp,vector<string>& out)
        {
            if(n==0)
            {
                out.push_back(temp);
                return;
            }
            
            for(int i=0 ; i<52 ; i++)
            {
                if(count[i] > 0)
                {
                    if(i<26) temp.push_back('A'+i);
                    else temp.push_back('a'+i-26);
                    count[i]--;
                    rec(n-1,count,temp,out);
                    count[i]++;
                    temp.pop_back();
                }
            }
        }

vector<string> find_permutation(string s)
		{
		    vector<int> count(52,0);
            for(char c:s)
            {
                if(c>='a' && c<='z') count[c-'a'+26]++;
                else count[c-'A']++;
            }
            vector<string> out;
            string temp = "";
            rec(s.length(),count,temp,out);
            return out;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends
