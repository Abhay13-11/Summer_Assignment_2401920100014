class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profitt=0;
        int buy=0;
        for(int i=1;i<prices.size();i++)
        {
            profitt=max(profitt,prices[i]-prices[buy]);
            if(prices[buy]>prices[i])
            {
                buy=i;
            }
        }
        return profitt;
  
    }
};