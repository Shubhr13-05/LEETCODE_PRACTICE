class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n1 = min(nums1.size(), nums2.size());
        int i = 0,j=0;
        vector<int>v;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                i++;
            }else if((nums1[i]>nums2[j])){
                j++;
            }else{
                v.push_back(nums1[i]);
                i++,j++;
            }
        }
        return v;
    }
};



//----------BIN SEARCH APPROACH---------

// class Solution {
//     bool bs(vector<int>v, int tar){
//         int l =0;
//         int h = v.size()-1;
//         while(l<=h){
//             int mid = l+(h-l)/2;
//             if(v[mid]==tar){
//                 return true;
//             }
//             else if(v[mid]>tar){
//                 h = mid-1;
//             }
//             else{
//                 l = mid+1;
//             }
//         }
//         return false;
//     }

// public:    
//     vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//         int n1 = min(nums1.size(), nums2.size());
//         int n2 = nums1.size();
//         int n3 = nums2.size();
//             vector<int>v;
//             if(n2>=n3){
//                 for(int i=0; i<n1; i++){
//                     if(bs(nums1, nums2[i]))v.push_back(nums2[i]);
//                 }
//             }
//             else{
//                 for(int i=0; i<n1; i++){
//                     if(bs(nums2, nums1[i]))v.push_back(nums1[i]);
//                 }
//             }
//             return v;
//         }
//     };