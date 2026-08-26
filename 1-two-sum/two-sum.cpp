// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {

//         vector<pair<int,int>> arr;

//         // value + original index store karo
//         for(int i = 0; i < nums.size(); i++){
//             arr.push_back({nums[i], i});
//         }

//         // value ke basis par sort
//         sort(arr.begin(), arr.end());

//         int i = 0;
//         int j = arr.size() - 1;

//         while(i < j){
//             int sum = arr[i].first + arr[j].first;

//             if(sum == target){
//                 return {arr[i].second, arr[j].second}; // original indices
//             }
//             else if(sum < target){
//                 i++;
//             }
//             else{
//                 j--;
//             }
//         }

//         return {};
//     }
// };

// -------------2ND TRY--------------

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int tar) {
//         int n = nums.size();  
//         map<int, int>mpp;
//         for(int i = 0; i<n; i++){
//             int a = nums[i];
//             int extra = tar - a;
//             if(mpp.find(extra)!=mpp.end()){
//                 return {i,e}
//             }
//         }

//     }
// };


// 3rd try


// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int tar) {
//         int j = nums.size()-1;  
//         int i = 0; 
//         vector<int>v;
//         sort(v.begin(), v.end());
//         while(i<=j){
//             int mid = i+(j-i)/2;
//             if(nums[i]+nums[j] > tar){
//                 j--;
//             }else if(nums[i]+nums[j] < tar){
//                 i++;
//             }else if(nums[i]+nums[j] == tar){
//                 v.push_back(i);
//                 v.push_back(j);
//             }
//         }
//         return v;
//     }
// };




// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int tar) {
//         int n =nums.size();
//         vector<int>v;
//         for(int i = 0; i<n; i++){
//             for(int j = i+1; j<n; j++){
//                 if(nums[i]+nums[j] == tar){
//                     v.push_back(i);
//                     v.push_back(j);
//             return v;//-------------> this is imp
//                 }
//             }
//         }
//         return v;
//     }

// };



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        map<int, int>mpp;
        vector<int>v;
        for(int i =0; i<nums.size(); i++){
            int left = tar-nums[i];
            if(mpp.find(left)!=mpp.end()){
                v.push_back(mpp[left]);
                v.push_back(i);
            }
            mpp[nums[i]] = i;
        }
        return v;
    }
};