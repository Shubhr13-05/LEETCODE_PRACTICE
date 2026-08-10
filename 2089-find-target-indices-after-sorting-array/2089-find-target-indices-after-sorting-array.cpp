class Solution {
public:
    pair<int,int>bs(vector<int>& nums, int t){
        int s = 0;
        int e = nums.size()-1;
        int ans = -1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==t){
                ans = mid;
                break;
            }
            else if(nums[mid]>t){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        int lb = 0;
        int ub = 0;
        if(ans==-1)return {-1,-1};
        else{
            for(int i=0; i<=ans; i++){
                if(nums[i]==t){
                    lb = i;
                    break;
                }
            }
            for(int i=nums.size()-1; i>=ans; i--){
                if(nums[i]==t){
                    ub = i;
                    break;
                }
            }
        }
        return {lb,ub};
    }
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int>v;
        pair<int, int>p = bs(nums, target);
        int lb = p.first;
        int ub = p.second;
        if(lb==-1 && ub==-1)return v;
        for(int i = lb; i<=ub; i++){
            v.push_back(i);
        }
        return v;
    }
};