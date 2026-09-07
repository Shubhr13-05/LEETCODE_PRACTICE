// class Solution {
// public:
//     int conv(string& s, int i, int sign, int ans){
//         if(i<s.size())return sign*ans;
//         if (s[i] < '0' || s[i] > '9') {
//             return sign * ans;
//         }
//         ans = ans*10+s[i];
//         if(sign==1 && ans>INT_MAX)return INT_MAX;
//         if(sign==-1 && ans>(-1*INT_MIN)return INT_MIN;
//         return conv(s,i+1,sign,ans);
//     }
//     int myAtoi(string s) {
//         int n =s.size();
//         int i = 0;
//         while(i<n && s[i]==' '){
//             i++;
//         }
//         int sign = 1;
//         if(i<n && s[i]=='-'){
//             sign = -1;
//         }
//         if(i<n && s[i]=='+'){
//             sign = 1;
//         }
//         int ans = 0;
//         return conv(s, i, sign, ans);
//     }
// };




class Solution {
public:

    int conv(string& s, int i, int sign, long long ans) {

        // Base case
        if (i >= s.size()) {
            return sign * ans;
        }

        // Stop at non-digit
        if (s[i] < '0' || s[i] > '9') {
            return sign * ans;
        }

        // Convert character to digit
        int digit = s[i] - '0';

        // Add digit
        ans = ans * 10 + digit;

        // Positive overflow
        if (sign == 1 && ans > INT_MAX) {
            return INT_MAX;
        }
        if (sign == -1 && ans > 2147483648LL) {
            return INT_MIN;
        }

        return conv(s, i + 1, sign, ans);
    }

    int myAtoi(string s) {

        int n = s.size();
        int i = 0;
        while (i < n && s[i] == ' ') {
            i++;
        }
        int sign = 1;

        if (i < n && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (i < n && s[i] == '+') {
            sign = 1;
            i++;
        }
        return conv(s, i, sign, 0);
    }
};