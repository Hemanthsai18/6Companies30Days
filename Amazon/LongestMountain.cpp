class Solution {
public:
    int longestMountain(vector<int>& a) {
        int i,j=-1,k=-1,ans=0;
        if(a.size()<3)
            return 0;
        for(i=0;i<a.size()-1;i++){
            if(a[i+1]>a[i]){
                if(k!=-1){
                    k=-1;
                    j=-1;
                }
                if(j==-1)
                    j=i;
            }
            else{
                if(a[i+1]<a[i]){
                    if(j!=-1){
                        k=i+1;
                    }
                    if(k!=-1&&j!=-1) {
                        if(ans<k-j+1)
                            ans=k-j+1;
                    }
                }
                else {
                    k=-1;
                    j=-1;
                }
            }
        }
        if (k != -1 && j != -1) {
            if (ans < k - j + 1) {
                ans = k - j + 1;
            }
        }
        return ans;
    }
};
