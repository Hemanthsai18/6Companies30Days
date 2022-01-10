class Solution {
public:
    
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int fresh=0;
        int n=grid.size();
        int m=grid[0].size();
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1)
                    fresh++;
                if(grid[i][j]==2)
                    q.push({i,j});
            }
        }
        if(fresh==0)
            return 0;
        int time=-1;
        pair<int,int> c;
        while(!q.empty()){
            time++;
            int qsize=q.size();
            for(int i=0;i<qsize;i++){
            c=q.front();
            q.pop();
            if(c.first+1<n && grid[c.first+1][c.second]==1){
                grid[c.first+1][c.second]=2;
                fresh--;
                q.push({c.first+1,c.second});
            }
            if(c.first-1>=0 && grid[c.first-1][c.second]==1){
                fresh--;
                grid[c.first-1][c.second]=2;
                q.push({c.first-1,c.second});
            }
            if(c.second+1<m && grid[c.first][c.second+1]==1){
                q.push({c.first,c.second+1});
                grid[c.first][c.second+1]=2;
                fresh--;
            }
            if(c.second-1>=0 && grid[c.first][c.second-1]==1){
                q.push({c.first,c.second-1});
                grid[c.first][c.second-1]=2;
                fresh--;
            }
            }
            
        }
        //cout<<fresh<<"gf ";
        if(fresh!=0)
            return -1;
        return time;
        
    }
};
