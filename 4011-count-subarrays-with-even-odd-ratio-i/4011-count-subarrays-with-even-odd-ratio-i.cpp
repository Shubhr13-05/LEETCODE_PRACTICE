// class Solution {
// public:
//     // bool check(vector<int>& nums, int s, int e,int a, int b){
//     //     int even=0, odd = 0;
//     //     for(int i = s; i<=e; i++){
//     //         if((nums[i]%2)==0)even++;
//     //         else odd++;
//     //     }
//     //     if(odd == 0) return false;
//     //     else if(even * b <= odd * a) return true;
//     //     return false;
//     // }
//     bool check(vector<int>& nums, int s, int e, int a, int b) {
//         int even = 0, odd = 0;   // initialize both
    
//         for (int i = s; i <= e; i++) {
//             if (nums[i] % 2 == 0)
//                 even++;
//             else
//                 odd++;
//         }
    
//         if (odd == 0)
//             return false;

//     return 1LL * even * b <= 1LL * odd * a; // cross multiplication
//     }
//     int countRatioSubarrays(vector<int>& nums, int a, int b) {
//         int ans = 0;
//         for(int i = 0; i<nums.size(); i++){
//             for(int j = i; j<nums.size(); j++){
//                     if(check(nums,i,j,a,b)){
//                         ans++;
//                     }
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int ans = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int even = 0, odd = 0;

            for (int j = i; j < n; j++) {
                if (nums[j] % 2 == 0)
                    even++;
                else
                    odd++;

                if (odd > 0 && 1LL * even * b <= 1LL * odd * a)
                    ans++;
            }
        }

        return ans;
    }
};