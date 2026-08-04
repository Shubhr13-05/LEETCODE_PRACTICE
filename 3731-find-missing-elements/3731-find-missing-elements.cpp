class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        // METHOD - 1
        sort(nums.begin(), nums.end());
        int lar = nums[nums.size()-1];
        int sma = nums[0];
        int ans = 0;
        vector<int>v;
        int i = 0;
        while(i<nums.size() && sma<=lar){
            if(nums[i] == sma){
                i++;
                sma++;
            }
            else if(nums[i]>sma){
                v.push_back(sma);
                // i++;
                sma++;
            }
        }
        return v;
    }
};