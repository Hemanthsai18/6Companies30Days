// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string s){
		    queue<char> q;
		    string ans="";
		    int h[26]={0};
		    for(int i=0;i<s.length();i++){
		        h[s[i]-97]++;
		        q.push(s[i]);
		        if(q.empty()){
		            ans+=s[i];
		            //cout<<s[i]<<" ";
		        }
		        else{
		            if(s[i]==q.front()){
		                while(!q.empty()){
		                    if(h[q.front()-97]>1){
		                        q.pop();
		                    }
		                    else break;
		                }
		                if(q.empty())
		                ans+="#";
		                else ans+=q.front();
		            }
		            else{
		                ans+=q.front();
		            }
		        }
		    }
		    return ans;
		    // Code here
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
