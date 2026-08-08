class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char, int>m1;
        map<char, int>m2;
        for(char c:jewels){
            m1[c]++;
        }
        for(char c:stones){
            m2[c]++;
        }
        int cnt = 0;
        for(auto it:m2){
            if(m1.find(it.first)!=m1.end()){
                cnt+=it.second;
            }
        }
        return cnt;
    }
};