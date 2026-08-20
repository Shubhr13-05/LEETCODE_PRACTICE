class Solution {
public:
    vector<int>merge(vector<int> arr1,vector<int>arr2){
        vector<int>ans;
        for(int i=1; i<=arr1.size(); i++){
            ans.push_back(arr1[i-1]);
        }
        for(int i=1; i<=arr2.size(); i++){
            ans.push_back(arr2[i-1]);
        }
    return ans;
    }
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int>arr2;
            arr1.push_back(nums[1-1]);      
            arr2.push_back(nums[2-1]);  
        for(int i = 3; i<=nums.size(); i++){
            if(arr2.back()>arr1.back()){
                arr2.push_back(nums[i-1]);
            }
            else{
             arr1.push_back(nums[i-1]);
            }
        }
        return merge(arr1, arr2);
    }
};