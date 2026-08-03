// class Solution {
// public:
//     int abs(int n){
//         if(n<0){
//             return -n;
//         }
//         return n;
//     }
//     // bool check(int i , int j, int k){
//     //     if(abs(i-j) <= k)return true;
//     //     return false;
//     // }
//     bool check(pair<int, int>p){


//     }
//     bool containsNearbyDuplicate(vector<int>& v, int k) {
//         // int n = v.size();
//         // bool ans = false;
//         // for(int i = 0; i<n; i++){
//         //     for(int j = i+1; j<n; j++){
//         //         if((v[i] == v[j]) && check(i, j, k)){
//         //             ans = true;
//         //         }
//         //     if(ans==true)return true;
//         //     }

//         // }
//         // return ans;

//         // -------SECOND TRY-------------
        
//         vector<pair<int, int>>p;
//         for(int i=0; i<v.size(); i++){
//             p.push_back({v[i], i});
//         }

//         sort(p.begin(), p.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
//             return a.first < b.first;
//         });

//         for (int i = 0; i < p.size(); i++) {
//             // cout << p[i].first << " " << p[i].second << endl;
//             if(p[i].first == p[i+1].first){
//                 if(check(p[[i]])){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };











class Solution {
public:
    int abs(int n) {
        return (n < 0) ? -n : n;
    }

    bool check(pair<int, int> a, pair<int, int> b, int k) {
        return abs(a.second - b.second) <= k;
    }

    bool containsNearbyDuplicate(vector<int>& v, int k) {

        vector<pair<int, int>> p;

        for (int i = 0; i < v.size(); i++) {
            p.push_back({v[i], i});
        }

        sort(p.begin(), p.end());

        for (int i = 0; i < p.size() - 1; i++) {

            if (p[i].first == p[i + 1].first) {

                if (check(p[i], p[i + 1], k)) {
                    return true;
                }
            }
        }

        return false;
    }
};