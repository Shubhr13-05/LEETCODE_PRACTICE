class Solution {
public:
    int abs(int n, int m){
        if(n<m)return m-n;
        return n-m; 
    }
    int rev(int n){
        int revv = 0;
        while(n!=0){
            revv=revv*10+(n%10);
            n/=10;
        }
        return revv;
    }
    int mirrorDistance(int n) {
        return abs(n, rev(n));
    }
};