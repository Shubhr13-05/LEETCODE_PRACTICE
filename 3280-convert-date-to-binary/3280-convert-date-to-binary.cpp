class Solution {
public:
    string toBin(int n){
        string s="";
        while(n!=0){
            // s+=(n%10+'0');
            s += (n % 2) + '0';
            n/=2;
        }
        reverse(s.begin(), s.end());
        return s;
    }
    string convertDateToBinary(string date) {
        string ans="";
        int val = 0;
        for(int i=0; i<4; i++){
           val=val*10+(date[i]-'0');
        }
         ans+=toBin(val);
         ans+='-';
         val=0;
        for(int i=5; i<7; i++){
           val=val*10+(date[i]-'0');        //-'0' krba odta h
        }  
        ans+=toBin(val);
         ans+='-'; 
         val = 0;
        for(int i=8; i<=9; i++){
           val=val*10+(date[i]-'0');
        }
        ans+=toBin(val);
        return ans;        
    }
};