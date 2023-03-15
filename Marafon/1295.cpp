#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findNumbers(vector<int>& nums){
        int ans = 0;

        for(int i = 0; i < nums.size(); i++){
            if(d_num(nums[i]) % 2 == 0){
                ans++;
            }
        }
        return ans;
    }

    int d_num(int num){
        int cnt = 0;
        while(num){
            num /= 10;
            cnt++;
        }
        return cnt;
    }
};



class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even = 0;
        for(int i=0;i<nums.size();i++){
            int value = nums[i];
            int count = 0;
            
            while(value>0){
                value = value/10;
                count++;
            }
            if(count%2==0){
                even++;
            }
        }
        
        return even;
    }
};