class Solution {
public:
    int ans(string st){
        int ans1 = 0;
        int multFactor = 3600;
        // string c1 = "";
        int num = 0;
        for(int i = 0; i<st.size(); i++){
            if(st[i]!=':'){
                // c1+=st[i];
                num = num * 10 + (st[i] - '0');
            }
            if(st[i]==':'){
                ans1+= num *multFactor;
                multFactor/=60;
                // c1='';
                num = 0;
            }
        }
        ans1+=num;
        return ans1;
    }
    int secondsBetweenTimes(string startTime, string endTime) {
        return ans(endTime)-ans(startTime);
    }
};