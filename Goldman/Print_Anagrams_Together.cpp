class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& str) {
        map<map<char,int>,vector<string>> all;
        
        for(auto s : str){
            map<char,int> mp;
            for(auto i : s){
                mp[i]++;
            }
            all[mp].push_back(s);
        }
        vector<vector<string>> ans;
        
        
        map<map<char,int>,vector<string>>::iterator m = all.begin();
        for(m=all.begin();m!=all.end();m++){
            ans.push_back(m->second);
        }
        return ans;
        
        //code here
    }
};
