class Solution {
public:
    int minimumPushes(string word) {
        map<char, int>mpp;
        for(int i = 0; i<word.size(); i++){
            mpp[word[i]]++;
        }
        long long sum = 0;
        long long cnt = 0;

        vector<pair<char, int>> v(mpp.begin(), mpp.end());

        sort(v.begin(), v.end(), [](const pair<char, int>& p1, const pair<char, int>& p2) {
            return p1.second > p2.second;   // Descending
        });

        for(auto x:v){
            // while(cnt<=8){
            //     sum+=x.second;
            //     cnt++;
            // }
            // while(cnt>8 && cnt<=16){
            //     sum+=(2*x.second);
            //     cnt++;
            // }
            // while(cnt>16 && cnt<=24){
            //     sum+=(3*x.second);
            //     cnt++;
            // }
            // while(cnt>24){
            //     sum+=4*x.second;
            //     cnt++;
            // }
            if(cnt < 8)
                sum += x.second;
            else if(cnt < 16)
                sum += 2 * x.second;
            else if(cnt < 24)
                sum += 3 * x.second;
            else
                sum += 4 * x.second;

            cnt++;

        }
        return sum;
    }
};