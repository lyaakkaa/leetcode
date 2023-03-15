#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = -9999;
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] > maxi){
                maxi = candies[i];
            }
        }

        vector <bool> ans;
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] + extraCandies >= maxi){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;

    }
};