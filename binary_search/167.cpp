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



class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i = 0; i < numbers.size(); i++){
            int num = target - numbers[i];
            int l = i + 1, r = numbers.size() - 1;
            int ans = binSearch(numbers, num, l, r);
            if(ans != -1){
                return {i, ans};
            }
        }
        return {-1, -1};
    }
    int binSearch(vector<int>& numbers, int target, int l, int r){
        while(l <= r){
            int m = l + (r - l)/2;
            if (numbers[m] == target) return m;
            else if (numbers[m] < target) l = m + 1;
            else r = m - 1;
        }
        return -1;
    }
};