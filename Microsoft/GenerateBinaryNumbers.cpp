// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
    queue<int> q;
    q.push(1);
    vector<string> ans;
    while(q.size()<N){
        int temp = q.front();
        ans.push_back(to_string(temp));
        q.pop();
        q.push(temp*10);
        q.push(temp*10+1);
    }
    while(q.size()>0&&ans.size()<N){
        int temp=q.front();
        ans.push_back(to_string(temp));
        q.pop();
    }
    return ans;
	// Your code here
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
