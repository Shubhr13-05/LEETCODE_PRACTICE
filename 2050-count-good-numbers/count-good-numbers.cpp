class Solution {
public:
    const int mod = 1e9+7;
    long long pow(long long x, long long n){
        if(n==0)return 1;
        if(n==1)return x;
        long long half = pow(x, n / 2);
        if (n % 2 == 0) {
            return (half * half) % mod;
        }
        return (x * half % mod * half) % mod;
    }
    int countGoodNumbers(long long n) {
        long long odd = (n+1)/2;
        long long even = n/2;
        long long ans = (pow(5,odd)*pow(4,even))%mod; 
        ans = ans%mod;
        return ans; 
    }
};