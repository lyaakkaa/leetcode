#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isThree(int n) {
        if(n == 1 || n == 0 || n == 2){
            return false;
        }
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            if(n % i == 0){
                cnt++;
            }
            if(cnt > 3){
                return false;
            }
        }
        if(cnt == 3){
            return true;
        }
        return false;
        
    }
};