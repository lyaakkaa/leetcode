#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        while(num){
            sum += num % 10;
            num /= 10;
        }
        if(sum < 10){
            return sum;
        }
        else{
            return addDigits(sum);
        }
    }
};





class Solution {
public:
    int addDigits(int num) {
      if(num == 0)
          return 0;
      else if(num%9==0)
          return 9;
      else
          return num%9;
    }
};


class Solution {
public:
    int addDigits(int num) {
      int sum = 0;
        while(num > 9){
            while(num){
                sum += num%10;
                num /= 10;
            }
            num = sum;
            sum = 0;
        }
        return num;
    }
};





