#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return (nums[nums.size()-1]-1)*(nums[nums.size()-2]-1);
    }
};


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq;
        int i=0;
        while(i<nums.size())
            pq.push(nums[i++]);
        int b=pq.top();
        pq.pop();
        return (b-1)*(pq.top()-1);
    }
};












class Solution {
public:
    
    // TC for this function = O(n) + O(log n);
    int maxProduct(vector<int>& nums) {
        int ind = (nums.size()-2)/2;
        
        for(int i=ind;i>=0;i--){
            maxHipify(nums,i);
        }
        
        int a=getTop(nums);
        deleteTop(nums);
        int b=getTop(nums);
        
        return (a-1)*(b-1);
        
    }
    
    
    // TC: O(log n)
    void maxHipify(vector<int>& nums, int i) {
        int lt = left(i);
        int rt = right(i);
        
        int high = i;
        
        if(lt<nums.size() && nums[lt]>nums[i]) {
            high = lt;
        }
        
        if(rt<nums.size() && nums[rt]>nums[high]) {
            high = rt;
        }
        
        if(high!=i) {
            swap(nums[i],nums[high]);
            maxHipify(nums,high);
        }
    }
    
    
    // TC: O(1)
    int getTop(vector<int>& nums) {
        return nums[0];
    }
    
    
    // TC: O(log n)
    void deleteTop(vector<int>&nums) {
        nums[0]=nums[nums.size()-1];
        nums.pop_back();
        maxHipify(nums,0);
    }
    
    
    // TC: O(1)
    int left(int i) {
        return 2*i+1;
    }
    
    
    // TC: O(1)
    int right(int i) {
        return 2*i+2;
    }
};