// class Solution {
// public:
//     int guessNumber(int n) {
//         int l = 1;
//         int r = n;
//         while(l <= r){
//             int m = l + (r - l) / 2;
//             int check = guess(m);
//             if(check == 0){
//                 return m;

//             }
//             if(check < 0){
//                 r = m - 1;
//             }
//             else{
//                 l = m + 1;
//             }

//         }
//         return -1;        
//     }
// };
