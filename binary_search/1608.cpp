#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = nums.size();
        
        /*
			possible range of x : [0 , n]
			low = 0 
			high = n
		*/

        while(l <= r){
            int m = l + (r - l) / 2;
            int cnt  = 0;

            for(int i = 0; i < n; i++){
                if(nums[i] >= m){
                    cnt++;
                }
            }
            if(cnt == m){
                return m;
            }
            if(cnt > m){
                l = m + 1;
            }
            else{
                r = m - 1;
            }
        }
        return -1;
    }
};