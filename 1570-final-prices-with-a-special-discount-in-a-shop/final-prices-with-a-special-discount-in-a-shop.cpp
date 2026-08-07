class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>v;
        for(int i =0; i<prices.size(); i++){
            int val = prices[i];
            int j = i+1;
            bool isDis = false;
            while(j<prices.size()){
                if(prices[j]<=val){
                    isDis = true;
                    break;
                }
                j++;               
            }
            if(isDis){
                v.push_back(val-prices[j]);
            }else{
                v.push_back(val);
            }
        }
        return v;
    }
};