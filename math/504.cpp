#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertToBase7(int num) {
        int res = 0;
        int dig = 1;

        while(num != 0){
            res += dig * (num % 7);
            num /= 7;
            dig *= 10;
        }
        return to_string(res);

    }
};