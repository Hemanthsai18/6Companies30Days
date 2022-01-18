// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int a[], int n)
    {
        int dp[n];
        for(int i=0;i<n;i++){
            if(i<2){
                dp[i]=a[i];
            }
            else{
                if(i==2)
                dp[i]=dp[i-2]+a[i];
                else{
                    dp[i]=max(dp[i-2],dp[i-3])+a[i];
                }
            }
        }
        return max(dp[n-1],dp[n-2]);
        // Your code here
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}
  // } Driver Code Ends
