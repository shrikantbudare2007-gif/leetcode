class Solution {
public:
    int maxProfit(vector<int>& pri) {
        int profit=0;
        int buy_day=0;
        int ans=0;
        for(int i=1;i<pri.size();i++){
            profit=pri[i]-pri[buy_day];
            if(profit<0){
                buy_day=i;
                continue;
            }
            ans=max(ans,profit);
        }
        return ans;
    }
};