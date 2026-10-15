class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="";
        string s2="";
        for(auto it:word1){
            s1+=it;
        }
        for(auto it:word2){
            s2+=it;
        }
        if(s1.size()!=s2.size())return false;
        bool isEqual = true;
        for(int i = 0; i<min(s1.size(), s2.size()); i++){
            if(s1[i]!=s2[i]){
                isEqual = false;
                break;
            }
        }
        return isEqual;
    }
};