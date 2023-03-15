#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map <int, int> mp;
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            if(mp[nums[i]] > 0){
                cnt += mp[nums[i]];
            }
            mp[nums[i]]++;
            
        }
        return cnt;

    }
};


class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
        }return count;
    }
};