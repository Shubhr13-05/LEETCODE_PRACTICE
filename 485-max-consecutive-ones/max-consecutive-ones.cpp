// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         vector<int> v;
//         int cnt = 0;
//         for(int i=0; i<nums.size(); i++){
//             if(nums[i]==0){
//                 v.push_back(cnt);
//                 cnt=0;
//             }
//             else{
//                 cnt++;
//             }
//         }
//         v.push_back(cnt);
//         int mx = 0;
//         for(int i=0; i<v.size(); i++){
//             mx = max(mx, v[i]); 
//         }
//         return mx; 
//     }
// };



class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& v) {
        // int cnt = 0;
        // int cnti = INT_MIN;
        // for(int i = 0; i<nums.size(); i++){
        //     if(nums[i] == 1){cnt++;}
        //     else if(nums[i] == 0){
        //         cnti = max(cnti, cnt);
        //         cnt = 0;
        //     }
        // } 
        // cnti = max(cnti, cnt);
        // return cnti;

        // 2ND TRY--------

        int j = 0;
        int n = v.size();
        int maxCnt = 0;
        int cnt = 0;
        while(j<n){
            if(v[j] == 0){
                j++;
                cnt = 0;
            }else{
                cnt++;
                maxCnt = max(maxCnt, cnt);
                j++;
            }
        }
        return maxCnt;


    }     //1,1,1,0,0,1,1       //0,0,0,1,1,1,0,1,1,0
};