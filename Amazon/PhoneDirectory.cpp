// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        //contact[2]="a";
        vector<vector<string>> ans(s.length());
        //sort(contact,contact+n);
        int c=0;
        set<string> st;
        for(int i=1;i<=s.length();i++){
            string temp = s.substr(0,i);
            
            st.clear();
            for(int j=0;j<n;j++){
                
                string t = contact[j].substr(0,i);
                if(t==temp){
                    st.insert(contact[j]);
                    //ans[i-1].push_back(contact[j]);
                    
                }
            }
            for(auto it = st.begin();it!=st.end();it++){
                ans[i-1].push_back(*it);
            }
            
            if(ans[i-1].size()==0)
            ans[i-1].push_back("0");
        }
        
        return ans;
        // code here
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string contact[n], s;
        for(int i = 0;i < n;i++)
            cin>>contact[i];
        cin>>s;
        
        Solution ob;
        vector<vector<string>> ans = ob.displayContacts(n, contact, s);
        for(int i = 0;i < s.size();i++){
            for(auto u: ans[i])
                cout<<u<<" ";
            cout<<"\n";
        }
    }
    return 0;
}  // } Driver Code Ends
