class Solution {
public:
    int larSmall(int n){
        int mx = INT_MIN, mn = INT_MAX;
        while(n!=0){
            int ld = n%10;
            mx = max(mx,ld);
            mn = min(mn, ld);
            n/=10;
        }
        return mx-mn;
    }
    int maxDigitRange(vector<int>& nums) {
        vector<pair<int, int>>p;
        for(int i = 0; i<nums.size(); i++){
            p.push_back({larSmall(nums[i]), nums[i]});
        }
        sort(p.begin(), p.end());
        int lar = p.size()-1;
        int ans = p[lar].first;
        int sum = 0;
        for(int i =p.size()-1;i>=0; i-- ){
            if(p[i].first == ans){
                sum+=p[i].second;
            }
        }
        return sum;
    }
};