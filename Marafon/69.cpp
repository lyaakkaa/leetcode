class Solution {
public:
    int mySqrt(int x) {

        int l = 1;
        int r = x;

        int ans = 0;

        while(l <= r){
            long long int m = l + (r - l)/ 2;
            long long int sqr = m * m;
            if(sqr == x){
                return m;
            }
            if(sqr < x){
                l = m + 1;
                ans = m;
            }
            else{
                r = m - 1;
            }
        }
        return ans;
        
    }
};
