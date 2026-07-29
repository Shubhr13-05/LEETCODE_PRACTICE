class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<pair<int, vector<int>>> vp;
        for(int i = 0; i<score.size(); i++){
            vp.push_back({score[i][k], score[i]});
        }
        sort(vp.begin(), vp.end(), [](const pair<int, vector<int>>& a,const pair<int, vector<int>>& b) {
            return a.first > b.first;
        });
        vector<vector<int>>fin;
        for(auto it: vp){
            fin.push_back(it.second);
        }
        return fin;
    }
};