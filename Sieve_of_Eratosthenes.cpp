// leetCode problem number -> 204
// count Primes -> https://leetcode.com/problems/count-primes/description/
#include<bits/stdc++.h>
using namespace std;
int countPrimes(int n) {
        int cnt=0;
        vector<bool>prime(n+1,true);
        prime[0] = prime[1] = false;
        for(int i=2; i<n; i++){
            if(prime[i]){
                cnt++;
            }
            // 1->true && 0->false
            for(int j=2*i; j<n; j=j+i){
                prime[j] = 0;
            }
        }
        return cnt;
}

int main()
{
    int n=20;
    cout<<countPrimes(n)<<endl;
    return 0;
}