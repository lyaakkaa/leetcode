#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n < 1) return false;
        if(n == 1) return true;
        if(n % 2 != 0) return false;
        return isPowerOfTwo(n / 2);
        
    }
};

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        return ceil(log2(n)) == floor(log2(n));
    }
};