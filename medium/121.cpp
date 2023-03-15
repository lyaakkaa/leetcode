#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int miniprice = 99999;
        int maxiprofit = -99999;
        for(int i = 0; i < prices.size(); i++){
            miniprice = min(miniprice, prices[i]);
            maxiprofit = max(maxiprofit, prices[i] - miniprice);
        }
        return maxiprofit;
    }
};