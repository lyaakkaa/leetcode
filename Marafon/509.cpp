#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int fib(int n) {
        if(n < 2){
            return n;
        }
        return fib(n - 1) + fib(n - 2);
        
    }
};



int fib(int n)
    {
        vector<int> fibpnacci;
        fibpnacci.push_back(0);
        fibpnacci.push_back(1);
        
        for(int i = 2; i <= n; i++)
            fibpnacci.push_back(fibpnacci[i - 1] + fibpnacci[i - 2]);
        
        return fibpnacci[n];
    }










int fib(int n)
    {
        if(n <= 1)
            return n;
        
        int first = 0;
        int second = 1;
        int num;
        for(int i = 2; i <= n; i++)
        {
            num = first + second;
            first = second;
            second = num;
        }
        return num;
    }