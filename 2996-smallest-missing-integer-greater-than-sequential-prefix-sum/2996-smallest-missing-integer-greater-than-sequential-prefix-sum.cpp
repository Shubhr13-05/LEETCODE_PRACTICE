class Solution {
public:
    int missingInteger(vector<int>& nums) {
        map<int, int>mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        int a = nums[0];
        // int sum = 0;
        // while(mpp.find(a)!=mpp.end()){
        //     sum+=a;
        //     a++;
        // }

        int sum = nums[0];

        // Check consecutive PREFIX, not presence in map
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i-1] + 1)
                sum += nums[i];
            else
                break;
        }

        // ye code i missed
        while(mpp.find(sum)!=mpp.end()){
            sum++;
        }
        return sum;
    }
};