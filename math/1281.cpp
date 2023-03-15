#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int subtractProductAndSum(int n) {
        int mult = 1;
        int sum = 0;
        int num = n;
        while(num){
            sum += num % 10;
            num /= 10;
        }
        while(n){
            mult *= n % 10;
            n /= 10;
        }
        return mult - sum;
    }
};