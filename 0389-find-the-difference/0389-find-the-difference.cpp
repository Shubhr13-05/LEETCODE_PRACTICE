class Solution {
public:
    char findTheDifference(string s, string t) {
        char xor1 = 0, xor2 = 0;
        for(char c:s){
            xor1 = xor1^c;
        }
        for(char c:t){
            xor2 = xor2^c;
        }
        return xor1^xor2;
    }
};