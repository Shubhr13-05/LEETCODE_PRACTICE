// class Solution {
// public:
//     int largestInteger(vector<int>& nums, int k) {
//         map<int, int>mpp;
//         for(int i = 0; i<nums.size(); i++){
//             mpp[nums[i]]++;
//         }
//         if(mpp[nums[0]]==1 && mpp[nums[nums.size()-1]]==1){
//             return max(nums[0], nums[nums.size()-1]);
//         }
//         if(mpp[nums[0]]==1)return nums[0];
//         if(mpp[nums[nums.size()-1]]==1)return nums[nums.size()-1];
//         return -1;
//     }
// };

//GPT
class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        map<int, int> mpp;

        // Count in how many k-length subarrays each number appears
        for (int i = 0; i <= n - k; i++) {
            set<int> st;

            for (int j = i; j < i + k; j++) {
                st.insert(nums[j]);
            }

            for (int x : st) {
                mpp[x]++;
            }
        }

        int ans = -1;

        for (auto it : mpp) {
            if (it.second == 1) {
                ans = max(ans, it.first);
            }
        }

        return ans;
    }
};