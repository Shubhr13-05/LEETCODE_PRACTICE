class Solution {
public:
    int larg(vector<int>& nums, int s, int e){
        int mx = INT_MIN;
        for(int i=s; i<=e; i++){
            mx = max(mx,nums[i]);
        }
        return mx;
    }
    int small(vector<int>& nums, int s, int e){
        int mn = INT_MAX;
        for(int i=s; i<=e; i++){
            mn = min(mn,nums[i]);
        }
        return mn;
    }
    int firstStableIndex(vector<int>& nums, int k) {
        vector<pair<int, int>>p;
        int n = nums.size();
        for(int i=0; i<n; i++){
            p.push_back({i,(larg(nums,0,i)-small(nums,i,n-1))});    //when push in pair p.push_back({});
        }
        for(auto it:p){
            if(it.second<=k)return it.first;
        }
        return -1;
    }
};