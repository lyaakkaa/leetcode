#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int,int> mp;

        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        unordered_map <int,int> :: iterator it;
        for(it = mp.begin(); it != mp.end(); it++){
            if(it->second == 1){
                return it->first;
            }
        
        }
        return -1;
    }
};

class Solution {
public:
    int singleNumber(vector<int>& nums) { 
       sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i+=2){
            if(nums[i] != nums[i-1])
                return nums[i-1];
        }
        return nums[nums.size()-1];
    }
};




class Solution {
public:
    int singleNumber(vector<int>& nums) { 
       int ans=0;
	   for(auto x:nums)
	   ans^=x;
	   return ans;
    }
};