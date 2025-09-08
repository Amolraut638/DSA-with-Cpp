#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n = prices.size();
        if(n == 0) 
            return 0; // Handled the edge case when prices are empty

        int maxProfit = 0, bestBuy = prices[0];

        for (int i = 1; i < n; i++) {

            if (prices[i] > bestBuy)
                maxProfit = max(maxProfit, prices[i] - bestBuy);

            bestBuy = min(bestBuy, prices[i]);      
        }

        return maxProfit;
    }
};

int main() {
    Solution solution;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Max Profit: " << solution.maxProfit(prices) << endl;
    return 0;
}