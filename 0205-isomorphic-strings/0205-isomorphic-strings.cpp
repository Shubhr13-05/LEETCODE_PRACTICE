// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//         map<char, char>mpp;
//          mpp[s[0]] = t[0];
//         for(int i = 1; i<s.size(); i++){
//             if(mpp.find(s[i])!=mpp.end()){
//                 if(mpp[s[i]] != mpp[s[0]])return false;
//             }
//         mpp[s[i]] = t[i];
//         }
//         return true;
//     }
// };




class Solution {
public:
    bool isIsomorphic(string s, string t) {

        map<char, char> mpp1;
        map<char, char> mpp2;

        for(int i = 0; i < s.size(); i++) {

            // s -> t
            if(mpp1.find(s[i]) != mpp1.end()) {
                if(mpp1[s[i]] != t[i])
                    return false;
            }
            else {
                mpp1[s[i]] = t[i];
            }

            // t -> s
            if(mpp2.find(t[i]) != mpp2.end()) {
                if(mpp2[t[i]] != s[i])
                    return false;
            }
            else {
                mpp2[t[i]] = s[i];
            }
        }

        return true;
    }
};