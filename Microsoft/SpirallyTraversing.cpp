// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > a, int r, int c) 
    {
        vector<int> ans;
       int k1=r,k2=c;
       int i,j;
        for(i=0;i<ceil(min(r,c)/2.0);i++){
            for(j=i;j<k2;j++){
                ans.push_back(a[i][j]);
                //cout<<a[i][j]<<" ";
                
            }
            for(j=i+1;j<k1;j++){
                ans.push_back(a[j][k2-1]);
                
            }
            for(j=k2-2;j>=i&&(k1-1)>i;j--){
                ans.push_back(a[k1-1][j]);
                
                //cout<<a[k1-1][j]<<" ";
            }
            for(j=k1-2;j>i&&i<(k2-1);j--){
                ans.push_back(a[j][i]);
                
                //cout<<a[j][i]<<" ";
            }
            k1--;
            k2--;
        }
        return ans;
        // code here 
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
