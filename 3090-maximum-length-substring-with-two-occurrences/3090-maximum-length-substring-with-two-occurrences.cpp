class Solution {
public:
    int checklen(string st, int i, int j){
        map<char, int>mpp;
        for(int s = i; s<=j; s++){
            mpp[st[s]]++;
            if( mpp[st[s]] > 2)return s-i;
        }
        return j-i+1;
    }
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int maxLen = 0;
        for(int i = 0; i<n; i++){
            for(int j=i+1; j<n; j++){
                maxLen = max(maxLen,checklen(s,i,j));
            }
        }
        return maxLen;
    }
};