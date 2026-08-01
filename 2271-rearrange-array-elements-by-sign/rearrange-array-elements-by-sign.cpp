class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        //-------FIRST TRY------------

        // vector<int>posv1;
        // vector<int>negv1;

        // for(int i = 0; i<nums.size(); i++){
        //     if(nums[i]>=0){
        //         posv1.push_back(nums[i]);
        //     }else{
        //         negv1.push_back(nums[i]);
        //     }
        // }       
        // int j = 0, k = 0;  
        // for(int i = 0; i<nums.size(); i++){
        //     if(i%2==0){
        //         nums[i]=posv1[j++];
        //     }else{
        //         nums[i]=negv1[k++];
        //     }
        // }
        // return nums;
    // }

        // ----------SECOND TRY----------------

    //     vector<int>ans(nums.size());
    //     int j = 0;
    //     int k = 1; 
    //     for(int i = 0; i<nums.size(); i++){
    //         if(nums[i] >= 0){
    //             ans[j] = nums[i];
    //             j+=2;
    //         }else{
    //             ans[k] = nums[i];
    //             k+=2;
    //         }
    //     }

    // return ans;
    // }

// ---------THIRD (23 MARCH)-----

    // vector<int>v1;
    // vector<int>v2;
    // for(int i = 0; i<nums.size(); i++){
    //     if(nums[i]>=0){
    //         v1.push_back(nums[i]);
    //     }else{
    //         v2.push_back(nums[i]);
    //     }
    // }
    // int p = 0, n = 0;

    // for(int i = 0; i < nums.size(); i++){
    //     if(i % 2 == 0){
    //         nums[i] = v1[p++];
    //     } else {
    //         nums[i] = v2[n++];
    //     }
    // }
    // return nums;
    // }

    // PRACTICE
    vector<int>pos, neg;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]>=0)pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }
        int n1 = pos.size();
        int n2 = neg.size();
        int i = 0, j=0, idx = 0;
        
        while(i<n1 && j<n2  ){        // && idx<arr.size()
           if(idx%2==0)nums[idx++] = pos[i++];
            else nums[idx++] = neg[j++];
        }
        while(i<n1){
            nums[idx++] = pos[i++];            
        }
        while(j<n2){
            nums[idx++] = neg[j++];            
        }
    return nums;
    }

};