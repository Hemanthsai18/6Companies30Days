// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    string colName (long long int n)
    {
        string ans ="";
        long long rem;
        while(n>0){
            rem=n%26;
            if(rem==0){
                ans+='Z';
                n=n/26-1;
            }
            else{
                ans= ans + char((rem-1)+'A');
                n/=26;
            }
        }
        
        reverse(ans.begin(),ans.end());
        ans+='\0';
        return ans;
        // your code here
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}
  // } Driver Code Ends
