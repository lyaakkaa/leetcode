#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num){
        int l = 1;
        int r = num / 2;

        while(l <= r){
            long long m = l + (r - l) / 2;
            if(m * m == num){
                return true;
            }
            if(m * m < num){
                l = m + 1;
            }
            else{
                r = m - 1;
            }
            
        }
        return false;
    }
};

