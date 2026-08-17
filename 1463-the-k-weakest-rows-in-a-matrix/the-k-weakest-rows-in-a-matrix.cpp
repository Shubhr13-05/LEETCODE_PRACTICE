class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>p;
        for(int i=0; i<mat.size(); i++){
            int cnt=0;
            for(int j=0; j<mat[0].size(); j++){
                if(mat[i][j] == 1)cnt++;
            }
            p.push_back({cnt, i});
        }
        sort(p.begin(), p.end());
        vector<int>ans;
        for(int i = 0; i<k; i++){
            auto it = p[i];
            ans.push_back(it.second);
        }
        return ans;
    }
};