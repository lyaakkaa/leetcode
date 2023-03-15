#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isUgly(int n) {
        if(n <= 0) return false;

        while(n){
            if(n == 1) return true;
            int a = n;
            if(n % 2 == 0) n /= 2;
            else if(n % 3 == 0) n /= 3;
            else if(n % 5 == 0) n /= 5;
            if(a == n) return false;
        }
        return true;
    }
};