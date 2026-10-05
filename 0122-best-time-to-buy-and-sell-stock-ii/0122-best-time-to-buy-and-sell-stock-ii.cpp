class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size(), sum = 0;
        if(len == 1)sum= 0;
        
        for(int i=0; i<len-1; i++)
        {
            if(prices[i] < prices[i+1])
            {
                sum += prices[i+1] - prices[i];
            }
        }
        return sum;
    }
};