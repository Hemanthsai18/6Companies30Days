class Solution{
  public:
  long long int pro=1;
    int cal(int s,int n,const vector<int>& a,int pro,int k){
        int c=0;
        for(int i=s;i<n;i++){
            pro/=a[i];
            if(pro<=k){
                return ++c;
            }
            else c++;
        }
        return c;
    }
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        int ans=0;
        int s=0;
        
        for(int i=0;i<n;i++){
            if(pro*a[i]>=k){
                pro*=a[i];
                int c=0;
                for(int j=s;j<n;j++){
                    pro/=a[j];
                    if(pro<k){
                        ++c;
                        break;
                    }
                    else c++;
                }
                s+=c;
                ans+=(i-s+1);
                
            }
            else {
                pro*=a[i];
                ans+=(i-s+1);
            }
            //cout<<ans<<" "<<pro<<"\n";
        }
        return ans;
    }
};
