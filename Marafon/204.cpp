#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if(n < 2){
            return 0;
        }
        int cnt = 0;
        vector <bool> v(n, true);

        for(int i = 2; i * i <= n; i++){
            if(v[i] == false){
                int k = i;
                while(k + i <= n){
                    k += i;
                    p[k] = true;
                }
            }
        }
        for(int i = 2; i <= n; i++){
            if(p[i] == false){
                cnt++;
            }
        }
        return cnt;
        
    }
    
    
};

int p[10000010];

void find_primes1(int n) {   //Эратосфен
    // for (int i = 2; i <= sqrt(n); i++)
    for (int i = 2; i * i <= n; i++) { 
        if (p[i] == 0) {
            int k = i;                 
            while (k + i <= n) {
                k += i;
                p[k] = 1;
            }
        }
    }

    for (int i = 2; i <= n; i++)
        if (p[i] == 0)
            cout << i << " ";

}