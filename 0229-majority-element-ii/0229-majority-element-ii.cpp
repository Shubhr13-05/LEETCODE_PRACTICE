class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // map<int, int>mpp;
        // int n = nums.size();
        // for(int i=0; i<nums.size(); i++){
        //     mpp[nums[i]]++;
        // }
        // int cnt = n/3;
        // vector<int> v;
        // for(auto it:mpp){
        //     if(it.second > cnt){
        //         v.push_back(it.first);
        //     }
        // }
        // return v;

        vector<int>v;
        for(int i = 0; i<nums.size(); i++){
            int cnt = 0;
            for(int j = 0; j<nums.size(); j++){
                if(nums[i] == nums[j])cnt++;
            } 
            if(cnt> nums.size()/3){
                if(v.size()==0 || v.back()!=nums[i]){
                    v.push_back(nums[i]);
                }
            }
            if (v.size() == 2) {
                if(v[0] > v[1])
                    swap(v[0], v[1]);
            break;
        }
        }
        return v;
    }
};