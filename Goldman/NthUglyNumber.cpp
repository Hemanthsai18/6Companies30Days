// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    ull ugly[n]; 
        ull i2 = 0, i3 = 0, i5 = 0;
        ull n2=2,n3=3,n5=5;
        ull next_ugly_no = 1;
        ugly[0] = 1;
        for (int i = 1; i < n; i++) {
            next_ugly_no = min(n2,min(n3, n5));
            ugly[i] = next_ugly_no;
            if (next_ugly_no == n2) {
                i2 = i2 + 1;
                n2 = ugly[i2] * 2;
            }
            if (next_ugly_no == n3) {
                i3 = i3 + 1;
                n3 = ugly[i3] * 3;
            }
            if (next_ugly_no == n5) {
                i5 = i5 + 1;
                n5 = ugly[i5] * 5;
            }
        }  
      
        return next_ugly_no;
	    
	    
	    // code here
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
