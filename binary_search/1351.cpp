#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt = 0;
        for(int i = 0; i < grid.size(); i++){
            int first_oc = bin_search(grid[i]);
            cnt += first_oc;
            
        }
        return cnt;
    }
    
    int bin_search(vector <int> &nums){
        int l = 0; 
        int r = nums.size() - 1;
        while(l <= r){
            int m = l + (r - l) / 2;
            if(nums[m] >= 0){
                l = m + 1;
            }
            else if(nums[m] < 0){
                r = m - 1;
            }
        }
        return nums.size() - l;
    }
};
