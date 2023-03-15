#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg = 0;
        for(int i = 0 ; i < k ; i++){
            avg += nums[i];
        }
        double maxAvg = avg;
        for(int j = k ; j < nums.size() ; j++){
            avg += nums[j] - nums[j - k]; 
            maxAvg = max(avg, maxAvg);
        }
        return maxAvg / k;
    }
};
    
