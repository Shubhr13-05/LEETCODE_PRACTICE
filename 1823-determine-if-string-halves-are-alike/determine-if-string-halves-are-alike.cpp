class Solution {
public:
    bool isVowel(char ch){
        if(ch=='A' || ch=='I'||ch=='E'||ch=='O'|| ch=='U'|| ch=='a' || ch=='i'||ch=='e'||ch=='o'|| ch=='u')return true;

        return false;
    }
    bool halvesAreAlike(string s) {
        int n = s.length();
        int cntV1 = 0;
        int cntV2 = 0;
        for(int i=0; i<n/2; i++){
            if(isVowel(s[i]))cntV1++;
        }
        for(int i = n/2; i<n; i++){
            if(isVowel(s[i]))cntV2++;
        }

        if(cntV2==cntV1)return true;
        return false;
    }
};