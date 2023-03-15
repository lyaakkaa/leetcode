#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int reverse(int x) {
        long long n = 0;
        while(x){
            n = n * 10 + x % 10;
            x /= 10;
        }
        return (n < INT_MIN || n > INT_MAX) ? 0 : n;
        
    }
};

