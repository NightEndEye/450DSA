//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
class Solution{
    public:
    struct Node* modifyTheList(struct Node *head)
    {
        //add code here.
        vector<int> arr;
        Node* temp=head;
        while(temp!=NULL){
            int val = temp->data;
            arr.push_back(val);
            temp=temp->next;
        }
        int mid=arr.size()/2 -1;
        int j=arr.size()-1;
        vector<int> rightleft;
        for(int i=0;i<=mid;i++){
            rightleft.push_back(arr[i]);
        }
        for(int i=0;i<=mid;i++){
            int val = arr[j]-arr[i];
            j--;
            arr[i]=val;
        }
        if(arr.size()&1){
            mid=mid+2;
        }else{
            mid=mid+1;
        }
        int k= rightleft.size()-1;
        for(int i= mid;i<arr.size();i++){
            arr[i]=rightleft[k];
            k--;
        }
        temp=head;
        int i=0;
        while(temp!=NULL){
            temp->data = arr[i];
            temp=temp->next;
            i++;
        }
        return head;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends