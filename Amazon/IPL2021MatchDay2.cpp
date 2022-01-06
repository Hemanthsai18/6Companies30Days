// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> a, int n, int k) {
        int h[1000001]={0};
        vector<int> ans;
        priority_queue<int> pq;
        for(int i=0;i<k;i++){
            pq.push(a[i]);
            h[a[i]]++;
        }
        ans.push_back(pq.top());
        for(int i=k;i<n;i++){
            h[a[i-k]]--;
            if(pq.top()==a[i-k]){
                pq.pop();
            }
            pq.push(a[i]);
            h[a[i]]++;
            while(h[pq.top()]==0){
                pq.pop();
            }
            ans.push_back(pq.top());
        }
        return ans;
        // your code here
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}  // } Driver Code Ends
