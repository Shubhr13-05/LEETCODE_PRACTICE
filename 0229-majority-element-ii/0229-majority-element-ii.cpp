class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int>mpp;
        int n = nums.size();
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        int cnt = n/3;
        vector<int> v;
        for(auto it:mpp){
            if(it.second > cnt){
                v.push_back(it.first);
            }
        }
        return v;
    }
};