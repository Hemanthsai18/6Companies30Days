// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int CountWays(string str){
		    int n = str.size();
		    const int mod = 1e9 + 7;
		    if(str[0] == '0')
		        return 0;
		    for(int i = 0; i < n-1; i++) {
		        if(str[i] == '0' && str[i+1] == '0')
		            return 0;
		    }
		    int dp[n+1] = {};
		    dp[0] = 1;
		    for(int i = 0; i < n; i++) {
		        if(str[i] == '0')
		            continue;
		        dp[i+1] = (dp[i+1] + dp[i])%mod;
		        if(i != n-1)
		        if(str[i] == '1'||(str[i] == '2' && str[i+1] < '7'))
		            dp[i+2] = (dp[i+2] + dp[i])%mod;
		    }
		    return dp[n];
		    // Code here
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
