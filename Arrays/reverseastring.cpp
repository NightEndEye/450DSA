//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

string reverseWord(string str){
    int n= str.length();
    int start = 0;
    int end = n -1;
    char temp;
    for(int i=0;i<n/2;i++){
        temp = str[start];
        str[start]= str[end];
        str[end]=temp;
        start++;end--;
    }
    return str;
}



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends