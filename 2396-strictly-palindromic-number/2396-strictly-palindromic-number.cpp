class Solution {
public:
    bool checkPelin(string s){
        int st = 0;
        int e = s.size()-1;
        while(st<=e){
            if(s[st]!=s[e])return false;
            st++;
            e--;
        }
        return true;
    }
    string cal(int n, int b){
        string s="";
        while(n!=0){
            s+=(n%b)+'0';
            n/=b;
        }
        return s;
    }
    bool isStrictlyPalindromic(int n) {

        for(int i=2; i<=n-2; i++){
            if(!checkPelin(cal(n, i))){
                return false;
            }
        }
        return true;
    }
};