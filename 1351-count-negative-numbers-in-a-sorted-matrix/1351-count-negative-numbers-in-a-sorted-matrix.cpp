class Solution {
public:
    int bs(vector<int>newGrid){
        int s = 0;
        int e = newGrid.size()-1;
        int ans = newGrid.size();
        while(s<=e){
            int mid = s+(e-s)/2;
            if(newGrid[mid]<=-1){
                ans = mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return newGrid.size()-ans;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int cnt = 0;
        for(int i = 0; i<grid.size(); i++){
            cnt+=bs(grid[i]);
        }
        return cnt;
    }
};