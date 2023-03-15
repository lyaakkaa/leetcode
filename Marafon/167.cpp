#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;
        while(l <= r){
            int cur;
            cur = numbers[l] + numbers[r];
            if(cur == target){
                return {l + 1, r + 1};
            }
            if(cur > target){
                r -= 1;
            }
            else{
                l += 1;
            }
        }
        return {l + 1, r + 1};
    }
};