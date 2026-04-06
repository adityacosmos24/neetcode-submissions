class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int ans=0;
        int maxi=0;
        for(int i=n-2;i>=0;i--)
        {
            maxi=max(maxi,prices[i+1]);
            ans=max(ans,maxi-prices[i]);
        }

        return ans;
    }
};
