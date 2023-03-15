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

// int bin_search(vector<int> &a, int k) {
//     int l = 0;
//     int r = a.size() - 1;
//     while (l < r) {
//         //cout << l << " " << r << endl;
//         int m = (l + r) / 2;
//         if (a[m] == k)
//             return m;
//         if (a[m] > k)
//             r = m - 1;
//         else
//             l = m + 1;
//     }
//     if (a[l] == k)
//         return l;
//     return -1;
// }
